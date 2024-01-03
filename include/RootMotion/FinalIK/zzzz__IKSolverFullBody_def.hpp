#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IKSolverFullBody)
namespace RootMotion::FinalIK {
class IKMappingBone;
}
namespace RootMotion::FinalIK {
class FBIKChain;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class IKMappingLimb;
}
namespace RootMotion::FinalIK {
class IKMappingSpine;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace RootMotion::FinalIK {
class __IKSolver__IterationDelegate;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class __IKSolver__UpdateDelegate;
}
namespace RootMotion::FinalIK {
class __IKSolver__Node;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverFullBody);
// Type: RootMotion.FinalIK::IKSolverFullBody
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12564))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12570))
// CS Name: ::RootMotion.FinalIK::IKSolverFullBody*
class CORDL_TYPE IKSolverFullBody : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  /// @brief Field iterations, offset 0x58, size 0x4
  __declspec(property(get = __get_iterations, put = __set_iterations)) int32_t iterations;

  /// @brief Field chain, offset 0x60, size 0x8
  __declspec(property(get = __get_chain, put = __set_chain))::ArrayW<::RootMotion::FinalIK::FBIKChain*, ::Array<::RootMotion::FinalIK::FBIKChain*>*> chain;

  /// @brief Field effectors, offset 0x68, size 0x8
  __declspec(property(get = __get_effectors, put = __set_effectors))::ArrayW<::RootMotion::FinalIK::IKEffector*, ::Array<::RootMotion::FinalIK::IKEffector*>*> effectors;

  /// @brief Field spineMapping, offset 0x70, size 0x8
  __declspec(property(get = __get_spineMapping, put = __set_spineMapping))::RootMotion::FinalIK::IKMappingSpine* spineMapping;

  /// @brief Field boneMappings, offset 0x78, size 0x8
  __declspec(property(get = __get_boneMappings, put = __set_boneMappings))::ArrayW<::RootMotion::FinalIK::IKMappingBone*, ::Array<::RootMotion::FinalIK::IKMappingBone*>*> boneMappings;

  /// @brief Field limbMappings, offset 0x80, size 0x8
  __declspec(property(get = __get_limbMappings, put = __set_limbMappings))::ArrayW<::RootMotion::FinalIK::IKMappingLimb*, ::Array<::RootMotion::FinalIK::IKMappingLimb*>*> limbMappings;

  /// @brief Field FABRIKPass, offset 0x88, size 0x1
  __declspec(property(get = __get_FABRIKPass, put = __set_FABRIKPass)) bool FABRIKPass;

  /// @brief Field OnPreRead, offset 0x90, size 0x8
  __declspec(property(get = __get_OnPreRead, put = __set_OnPreRead))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPreRead;

  /// @brief Field OnPreSolve, offset 0x98, size 0x8
  __declspec(property(get = __get_OnPreSolve, put = __set_OnPreSolve))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPreSolve;

  /// @brief Field OnPreIteration, offset 0xa0, size 0x8
  __declspec(property(get = __get_OnPreIteration, put = __set_OnPreIteration))::RootMotion::FinalIK::__IKSolver__IterationDelegate* OnPreIteration;

  /// @brief Field OnPostIteration, offset 0xa8, size 0x8
  __declspec(property(get = __get_OnPostIteration, put = __set_OnPostIteration))::RootMotion::FinalIK::__IKSolver__IterationDelegate* OnPostIteration;

  /// @brief Field OnPreBend, offset 0xb0, size 0x8
  __declspec(property(get = __get_OnPreBend, put = __set_OnPreBend))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPreBend;

  /// @brief Field OnPostSolve, offset 0xb8, size 0x8
  __declspec(property(get = __get_OnPostSolve, put = __set_OnPostSolve))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPostSolve;

  /// @brief Field OnStoreDefaultLocalState, offset 0xc0, size 0x8
  __declspec(property(get = __get_OnStoreDefaultLocalState, put = __set_OnStoreDefaultLocalState))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnStoreDefaultLocalState;

  /// @brief Field OnFixTransforms, offset 0xc8, size 0x8
  __declspec(property(get = __get_OnFixTransforms, put = __set_OnFixTransforms))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnFixTransforms;

  constexpr int32_t& __get_iterations();

  constexpr int32_t const& __get_iterations() const;

  constexpr void __set_iterations(int32_t value);

  constexpr ::ArrayW<::RootMotion::FinalIK::FBIKChain*, ::Array<::RootMotion::FinalIK::FBIKChain*>*>& __get_chain();

  constexpr ::ArrayW<::RootMotion::FinalIK::FBIKChain*, ::Array<::RootMotion::FinalIK::FBIKChain*>*> const& __get_chain() const;

  constexpr void __set_chain(::ArrayW<::RootMotion::FinalIK::FBIKChain*, ::Array<::RootMotion::FinalIK::FBIKChain*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::IKEffector*, ::Array<::RootMotion::FinalIK::IKEffector*>*>& __get_effectors();

  constexpr ::ArrayW<::RootMotion::FinalIK::IKEffector*, ::Array<::RootMotion::FinalIK::IKEffector*>*> const& __get_effectors() const;

  constexpr void __set_effectors(::ArrayW<::RootMotion::FinalIK::IKEffector*, ::Array<::RootMotion::FinalIK::IKEffector*>*> value);

  constexpr ::RootMotion::FinalIK::IKMappingSpine*& __get_spineMapping();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKMappingSpine*> const& __get_spineMapping() const;

  constexpr void __set_spineMapping(::RootMotion::FinalIK::IKMappingSpine* value);

  constexpr ::ArrayW<::RootMotion::FinalIK::IKMappingBone*, ::Array<::RootMotion::FinalIK::IKMappingBone*>*>& __get_boneMappings();

  constexpr ::ArrayW<::RootMotion::FinalIK::IKMappingBone*, ::Array<::RootMotion::FinalIK::IKMappingBone*>*> const& __get_boneMappings() const;

  constexpr void __set_boneMappings(::ArrayW<::RootMotion::FinalIK::IKMappingBone*, ::Array<::RootMotion::FinalIK::IKMappingBone*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::IKMappingLimb*, ::Array<::RootMotion::FinalIK::IKMappingLimb*>*>& __get_limbMappings();

  constexpr ::ArrayW<::RootMotion::FinalIK::IKMappingLimb*, ::Array<::RootMotion::FinalIK::IKMappingLimb*>*> const& __get_limbMappings() const;

  constexpr void __set_limbMappings(::ArrayW<::RootMotion::FinalIK::IKMappingLimb*, ::Array<::RootMotion::FinalIK::IKMappingLimb*>*> value);

  constexpr bool& __get_FABRIKPass();

  constexpr bool const& __get_FABRIKPass() const;

  constexpr void __set_FABRIKPass(bool value);

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __get_OnPreRead();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __get_OnPreRead() const;

  constexpr void __set_OnPreRead(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __get_OnPreSolve();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __get_OnPreSolve() const;

  constexpr void __set_OnPreSolve(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__IterationDelegate*& __get_OnPreIteration();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__IterationDelegate*> const& __get_OnPreIteration() const;

  constexpr void __set_OnPreIteration(::RootMotion::FinalIK::__IKSolver__IterationDelegate* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__IterationDelegate*& __get_OnPostIteration();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__IterationDelegate*> const& __get_OnPostIteration() const;

  constexpr void __set_OnPostIteration(::RootMotion::FinalIK::__IKSolver__IterationDelegate* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __get_OnPreBend();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __get_OnPreBend() const;

  constexpr void __set_OnPreBend(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __get_OnPostSolve();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __get_OnPostSolve() const;

  constexpr void __set_OnPostSolve(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __get_OnStoreDefaultLocalState();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __get_OnStoreDefaultLocalState() const;

  constexpr void __set_OnStoreDefaultLocalState(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __get_OnFixTransforms();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __get_OnFixTransforms() const;

  constexpr void __set_OnFixTransforms(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  /// @brief Method GetEffector, addr 0x1266144, size 0xdc, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKEffector* GetEffector(::UnityEngine::Transform* t);

  /// @brief Method GetChain, addr 0x1266220, size 0x48, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::FBIKChain* GetChain(::UnityEngine::Transform* transform);

  /// @brief Method GetChainIndex, addr 0x1266268, size 0x114, virtual false, abstract: false, final false
  inline int32_t GetChainIndex(::UnityEngine::Transform* transform);

  /// @brief Method GetNode, addr 0x125a0f4, size 0x50, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Node* GetNode(int32_t chainIndex, int32_t nodeIndex);

  /// @brief Method GetChainAndNodeIndexes, addr 0x1259f68, size 0x74, virtual false, abstract: false, final false
  inline void GetChainAndNodeIndexes(::UnityEngine::Transform* transform, ByRef<int32_t> chainIndex, ByRef<int32_t> nodeIndex);

  /// @brief Method GetPoints, addr 0x126637c, size 0x198, virtual true, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method GetPoint, addr 0x1266514, size 0x15c, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method IsValid, addr 0x1266670, size 0x1fc, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method StoreDefaultLocalState, addr 0x126686c, size 0xd0, virtual true, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms, addr 0x126693c, size 0xdc, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method OnInitiate, addr 0x1266a18, size 0x15c, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method OnUpdate, addr 0x1266b74, size 0x198, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method ReadPose, addr 0x1266d0c, size 0x22c, virtual true, abstract: false, final false
  inline void ReadPose();

  /// @brief Method Solve, addr 0x1266f38, size 0x2d0, virtual true, abstract: false, final false
  inline void Solve();

  /// @brief Method ApplyBendConstraints, addr 0x1267208, size 0x38, virtual true, abstract: false, final false
  inline void ApplyBendConstraints();

  /// @brief Method WritePose, addr 0x1267240, size 0xd8, virtual true, abstract: false, final false
  inline void WritePose();

  static inline ::RootMotion::FinalIK::IKSolverFullBody* New_ctor();

  /// @brief Method .ctor, addr 0x1267318, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFullBody", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverFullBody(IKSolverFullBody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFullBody", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverFullBody(IKSolverFullBody const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverFullBody();

public:
  /// @brief Field iterations, offset: 0x58, size: 0x4, def value: None
  int32_t ___iterations;

  /// @brief Field chain, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::FBIKChain*, ::Array<::RootMotion::FinalIK::FBIKChain*>*> ___chain;

  /// @brief Field effectors, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::IKEffector*, ::Array<::RootMotion::FinalIK::IKEffector*>*> ___effectors;

  /// @brief Field spineMapping, offset: 0x70, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKMappingSpine* ___spineMapping;

  /// @brief Field boneMappings, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::IKMappingBone*, ::Array<::RootMotion::FinalIK::IKMappingBone*>*> ___boneMappings;

  /// @brief Field limbMappings, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::IKMappingLimb*, ::Array<::RootMotion::FinalIK::IKMappingLimb*>*> ___limbMappings;

  /// @brief Field FABRIKPass, offset: 0x88, size: 0x1, def value: None
  bool ___FABRIKPass;

  /// @brief Field OnPreRead, offset: 0x90, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnPreRead;

  /// @brief Field OnPreSolve, offset: 0x98, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnPreSolve;

  /// @brief Field OnPreIteration, offset: 0xa0, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__IterationDelegate* ___OnPreIteration;

  /// @brief Field OnPostIteration, offset: 0xa8, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__IterationDelegate* ___OnPostIteration;

  /// @brief Field OnPreBend, offset: 0xb0, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnPreBend;

  /// @brief Field OnPostSolve, offset: 0xb8, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnPostSolve;

  /// @brief Field OnStoreDefaultLocalState, offset: 0xc0, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnStoreDefaultLocalState;

  /// @brief Field OnFixTransforms, offset: 0xc8, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnFixTransforms;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverFullBody, 0xd0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___iterations) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___chain) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___effectors) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___spineMapping) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___boneMappings) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___limbMappings) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___FABRIKPass) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___OnPreRead) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___OnPreSolve) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___OnPreIteration) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___OnPostIteration) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___OnPreBend) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___OnPostSolve) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___OnStoreDefaultLocalState) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFullBody, ___OnFixTransforms) == 0xc8, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverFullBody);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverFullBody*, "RootMotion.FinalIK", "IKSolverFullBody");
