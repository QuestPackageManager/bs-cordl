#pragma once
// IWYU pragma private; include "GlobalNamespace/CopyPosition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CopyPosition)
namespace GlobalNamespace {
class CopyPosition_CopyPositionUpdater;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CopyPosition;
}
namespace GlobalNamespace {
class CopyPosition_CopyPositionUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CopyPosition);
MARK_REF_PTR_T(::GlobalNamespace::CopyPosition_CopyPositionUpdater);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CopyPosition/CopyPositionUpdater
class CORDL_TYPE CopyPosition_CopyPositionUpdater : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _copyPositions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__copyPositions,
                      put = __cordl_internal_set__copyPositions)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* _copyPositions;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater> _instance;

  /// @brief Method Add, addr 0x39c4904, size 0x1dc, virtual false, abstract: false, final false
  static inline void Add(::GlobalNamespace::CopyPosition* copyPosition);

  /// @brief Method LateUpdate, addr 0x39c4ae8, size 0x1ac, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::CopyPosition_CopyPositionUpdater* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* const& __cordl_internal_get__copyPositions() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>*& __cordl_internal_get__copyPositions();

  constexpr void __cordl_internal_set__copyPositions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* value);

  /// @brief Method .ctor, addr 0x39c4c94, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater> getStaticF__instance();

  static inline void setStaticF__instance(::UnityW<::GlobalNamespace::CopyPosition_CopyPositionUpdater> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyPosition_CopyPositionUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyPosition_CopyPositionUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyPosition_CopyPositionUpdater(CopyPosition_CopyPositionUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyPosition_CopyPositionUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyPosition_CopyPositionUpdater(CopyPosition_CopyPositionUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16410 };

  /// @brief Field _copyPositions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* ____copyPositions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CopyPosition_CopyPositionUpdater, ____copyPositions) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CopyPosition_CopyPositionUpdater, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CopyPosition
class CORDL_TYPE CopyPosition : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CopyPositionUpdater = ::GlobalNamespace::CopyPosition_CopyPositionUpdater;

  /// @brief Field source, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityW<::UnityEngine::Transform> source;

  /// @brief Method Awake, addr 0x39c4900, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::CopyPosition* New_ctor();

  /// @brief Method Refresh, addr 0x39c48c0, size 0x40, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_source() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x39c4ae0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyPosition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyPosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyPosition(CopyPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyPosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyPosition(CopyPosition const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16411 };

  /// @brief Field source, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___source;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CopyPosition, ___source) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CopyPosition, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CopyPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CopyPosition*, "", "CopyPosition");
NEED_NO_BOX(::GlobalNamespace::CopyPosition_CopyPositionUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CopyPosition_CopyPositionUpdater*, "", "CopyPosition/CopyPositionUpdater");
