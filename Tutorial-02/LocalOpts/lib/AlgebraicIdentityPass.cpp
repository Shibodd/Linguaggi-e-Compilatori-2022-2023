#include "LocalOpts.h"
#include "llvm/IR/InstrTypes.h"
using namespace llvm;

bool algebric_transformation(BasicBlock &B){

}


PreservedAnalyses AlgebraicIdentityPass::run([[maybe_unused]] Module &M,
                                             ModuleAnalysisManager &) {
  // TODO: Implement the pass
  outs() << "AlgebraicIdentity\n";
  return PreservedAnalyses::none();
}