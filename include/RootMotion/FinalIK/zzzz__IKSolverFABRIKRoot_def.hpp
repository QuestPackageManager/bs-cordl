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
// CS Name: ::RootMotion.FinalIK::IKSolverFABRIKRoot*
class CORDL_TYPE IKSolverFABRIKRoot : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  /// @brief Field chains, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_chains, put = __cordl_internal_set_chains))::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> chains;

  /// @brief Field isRoot, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_isRoot, put = __cordl_internal_set_isRoot))::ArrayW<bool, ::Array<bool>*> isRoot;

  /// @brief Field iterations, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_iterations, put = __cordl_internal_set_iterations)) int32_t iterations;

  /// @brief Field rootDefaultPosition, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get_rootDefaultPosition, put = __cordl_internal_set_rootDefaultPosition))::UnityEngine::Vector3 rootDefaultPosition;

  /// @brief Field rootPin, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_rootPin, put = __cordl_internal_set_rootPin)) float_t rootPin;

  /// @brief Field zeroWeightApplied, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_zeroWeightApplied, put = __cordl_internal_set_zeroWeightApplied)) bool zeroWeightApplied;

  /// @brief Method AddPointsToArray, addr 0x136950c, size 0x138, virtual false, abstract: false, final false
  inline void AddPointsToArray(ByRef<::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*>> array, ::RootMotion::FinalIK::FABRIKChain* chain);

  /// @brief Method FixTransforms, addr 0x1368e60, size 0x94, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method GetCentroid, addr 0x1369244, size 0x228, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetCentroid();

  /// @brief Method GetPoint, addr 0x1369644, size 0x84, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method GetPoints, addr 0x136946c, size 0xa0, virtual true, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method IsRoot, addr 0x1368fdc, size 0x90, virtual false, abstract: false, final false
  inline bool IsRoot(int32_t index);

  /// @brief Method IsValid, addr 0x1368780, size 0x654, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  static inline ::RootMotion::FinalIK::IKSolverFABRIKRoot* New_ctor();

  /// @brief Method OnInitiate, addr 0x1368ef4, size 0xe8, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method OnUpdate, addr 0x136906c, size 0x1d8, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method StoreDefaultLocalState, addr 0x1368dd4, size 0x8c, virtual true, abstract: false, final false
  inline void StoreDefaultLocalState();

  constexpr ::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> const& __cordl_internal_get_chains() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*>& __cordl_internal_get_chains();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_isRoot() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_isRoot();

  constexpr int32_t const& __cordl_internal_get_iterations() const;

  constexpr int32_t& __cordl_internal_get_iterations();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rootDefaultPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rootDefaultPosition();

  constexpr float_t const& __cordl_internal_get_rootPin() const;

  constexpr float_t& __cordl_internal_get_rootPin();

  constexpr bool const& __cordl_internal_get_zeroWeightApplied() const;

  constexpr bool& __cordl_internal_get_zeroWeightApplied();

  constexpr void __cordl_internal_set_chains(::ArrayW<::RootMotion::FinalIK::FABRIKChain*, ::Array<::RootMotion::FinalIK::FABRIKChain*>*> value);

  constexpr void __cordl_internal_set_isRoot(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_iterations(int32_t value);

  constexpr void __cordl_internal_set_rootDefaultPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rootPin(float_t value);

  constexpr void __cordl_internal_set_zeroWeightApplied(bool value);

  /// @brief Method .ctor, addr 0x13696c8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverFABRIKRoot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIKRoot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverFABRIKRoot(IKSolverFABRIKRoot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIKRoot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverFABRIKRoot(IKSolverFABRIKRoot const&) = delete;

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
