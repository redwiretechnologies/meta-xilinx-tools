REPO ??= "git://github.com/Xilinx/device-tree-xlnx.git;protocol=https"
BRANCHARG = "${@['nobranch=1', 'branch=${BRANCH}'][d.getVar('BRANCH') != '']}"
SRC_URI:append = " ${REPO};${BRANCHARG}"

BRANCH[2021.2] = "xlnx_rel_v2021.2"
SRCREV[2021.2] = "c0acd8f064eb41f5132333ce3ac4b5de3aa0db9b"


BRANCH = "${@d.getVarFlag('BRANCH', d.getVar('XILINX_XSCT_VERSION'))}"
SRCREV = "${@d.getVarFlag('SRCREV', d.getVar('XILINX_XSCT_VERSION'))}"
