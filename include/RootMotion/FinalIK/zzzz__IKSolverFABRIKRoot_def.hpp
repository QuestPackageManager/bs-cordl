#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKSolverFABRIKRoot)
namespace RootMotion::FinalIK {
class FABRIKChain;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverFABRIKRoot;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverFABRIKRoot);
// Type: RootMotion.FinalIK::IKSolverFABRIKRoot
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12564)), TypeDefinitionIndex(TypeDefinitionIndex(10249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12569))
// CS Name: ::RootMotion.FinalIK::IKSolverFABRIKRoot*
class CORDL_TYPE IKSolverFABRIKRoot : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  /// @brief Field iterations, offset 0x58, size 0x4
  __declspec(property(get = __get_iterations, put = __set_iterations)) int32_t iterations;

  /// @brief Field rootPin, offset 0x5c, size 0x4
  __declspec(property(get = __get_rootPin, put = __set_rootPin)) float_t rootPin;

  /// @brief Field chains, offset 0x60, size 0x8
  __declspec(property(get = __get_chains, put = __set_chains))::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> chains;

  /// @brief Field zeroWeightApplied, offset 0x68, size 0x1
  __declspec(property(get = __get_zeroWeightApplied, put = __set_zeroWeightApplied)) bool zeroWeightApplied;

  /// @brief Field isRoot, offset 0x70, size 0x8
  __declspec(property(get = __get_isRoot, put = __set_isRoot))::ArrayW<bool, ::Array<bool>*> isRoot;

  /// @brief Field rootDefaultPosition, offset 0x78, size 0xc
  __declspec(property(get = __get_rootDefaultPosition, put = __set_rootDefaultPosition))::UnityEngine::Vector3 rootDefaultPosition;

  constexpr int32_t& __get_iterations();

  constexpr int32_t const& __get_iterations() const;

  constexpr void __set_iterations(int32_t value);

  constexpr float_t& __get_rootPin();

  constexpr float_t const& __get_rootPin() const;

  constexpr void __set_rootPin(float_t value);

  constexpr ::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*>& __get_chains();

  constexpr ::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> const& __get_chains() const;

  constexpr void __set_chains(::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> value);

  constexpr bool& __get_zeroWeightApplied();

  constexpr bool const& __get_zeroWeightApplied() const;

  constexpr void __set_zeroWeightApplied(bool value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_isRoot();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_isRoot() const;

  constexpr void __set_isRoot(::ArrayW<bool, ::Array<bool>*> value);

  constexpr ::UnityEngine::Vector3& __get_rootDefaultPosition();

  constexpr ::UnityEngine::Vector3 const& __get_rootDefaultPosition() const;

  constexpr void __set_rootDefaultPosition(::UnityEngine::Vector3 value);

  /// @brief Method IsValid, addr 0x126518c, size 0x654, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method StoreDefaultLocalState, addr 0x12657e0, size 0x8c, virtual true, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms, addr 0x126586c, size 0x94, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method OnInitiate, addr 0x1265900, size 0xe8, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method IsRoot, addr 0x12659e8, size 0x90, virtual false, abstract: false, final false
  inline bool IsRoot(int32_t index);

  /// @brief Method OnUpdate, addr 0x1265a78, size 0x1d8, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method GetPoints, addr 0x1265e78, size 0xa0, virtual true, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method GetPoint, addr 0x1266050, size 0x84, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method AddPointsToArray, addr 0x1265f18, size 0x138, virtual false, abstract: false, final false
  inline void AddPointsToArray(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*>> array, ::RootMotion::FinalIK::FABRIKChain* chain);

  /// @brief Method GetCentroid, addr 0x1265c50, size 0x228, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetCentroid();

  static inline ::RootMotion::FinalIK::IKSolverFABRIKRoot* New_ctor();

  /// @brief Method .ctor, addr 0x12660d4, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIKRoot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverFABRIKRoot(IKSolverFABRIKRoot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIKRoot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverFABRIKRoot(IKSolverFABRIKRoot const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverFABRIKRoot();

public:
  /// @brief Field iterations, offset: 0x58, size: 0x4, def value: None
  int32_t ___iterations;

  /// @brief Field rootPin, offset: 0x5c, size: 0x4, def value: None
  float_t ___rootPin;

  /// @brief Field chains, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> ___chains;

  /// @brief Field zeroWeightApplied, offset: 0x68, size: 0x1, def value: None
  bool ___zeroWeightApplied;

  /// @brief Field isRoot, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___isRoot;

  /// @brief Field rootDefaultPosition, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rootDefaultPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverFABRIKRoot, 0x88>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFABRIKRoot, ___iterations) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFABRIKRoot, ___rootPin) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFABRIKRoot, ___chains) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFABRIKRoot, ___zeroWeightApplied) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFABRIKRoot, ___isRoot) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFABRIKRoot, ___rootDefaultPosition) == 0x78, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverFABRIKRoot);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverFABRIKRoot*, "RootMotion.FinalIK", "IKSolverFABRIKRoot");
