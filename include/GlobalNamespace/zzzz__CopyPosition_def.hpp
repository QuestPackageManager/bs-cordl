#pragma once
// IWYU pragma private; include "GlobalNamespace/CopyPosition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CopyPosition)
namespace GlobalNamespace {
class __CopyPosition__CopyPositionUpdater;
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
class __CopyPosition__CopyPositionUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CopyPosition);
MARK_REF_PTR_T(::GlobalNamespace::__CopyPosition__CopyPositionUpdater);
// Type: ::CopyPositionUpdater
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CopyPosition::CopyPositionUpdater*
class CORDL_TYPE __CopyPosition__CopyPositionUpdater : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _copyPositions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__copyPositions,
                      put = __cordl_internal_set__copyPositions)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* _copyPositions;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::UnityW<::GlobalNamespace::__CopyPosition__CopyPositionUpdater> _instance;

  /// @brief Method Add, addr 0x396cf90, size 0x1dc, virtual false, abstract: false, final false
  static inline void Add(::GlobalNamespace::CopyPosition* copyPosition);

  /// @brief Method LateUpdate, addr 0x396d174, size 0x1ac, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::__CopyPosition__CopyPositionUpdater* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>*& __cordl_internal_get__copyPositions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>*> const& __cordl_internal_get__copyPositions() const;

  constexpr void __cordl_internal_set__copyPositions(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* value);

  /// @brief Method .ctor, addr 0x396d320, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::__CopyPosition__CopyPositionUpdater> getStaticF__instance();

  static inline void setStaticF__instance(::UnityW<::GlobalNamespace::__CopyPosition__CopyPositionUpdater> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CopyPosition__CopyPositionUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CopyPosition__CopyPositionUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CopyPosition__CopyPositionUpdater(__CopyPosition__CopyPositionUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CopyPosition__CopyPositionUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CopyPosition__CopyPositionUpdater(__CopyPosition__CopyPositionUpdater const&) = delete;

  /// @brief Field _copyPositions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CopyPosition>>* ____copyPositions;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16371 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CopyPosition__CopyPositionUpdater, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CopyPosition__CopyPositionUpdater, ____copyPositions) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CopyPosition
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CopyPosition*
class CORDL_TYPE CopyPosition : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CopyPositionUpdater = ::GlobalNamespace::__CopyPosition__CopyPositionUpdater;

  /// @brief Field source, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityW<::UnityEngine::Transform> source;

  /// @brief Method Awake, addr 0x396cf8c, size 0x4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::CopyPosition* New_ctor();

  /// @brief Method Refresh, addr 0x396cf4c, size 0x40, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_source() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x396d16c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field source, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___source;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16372 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CopyPosition, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CopyPosition, ___source) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CopyPosition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CopyPosition*, "", "CopyPosition");
NEED_NO_BOX(::GlobalNamespace::__CopyPosition__CopyPositionUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CopyPosition__CopyPositionUpdater*, "", "CopyPosition/CopyPositionUpdater");
