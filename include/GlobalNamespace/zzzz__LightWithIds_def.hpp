#pragma once
// IWYU pragma private; include "GlobalNamespace/LightWithIds.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightWithIds)
namespace GlobalNamespace {
class ILightWithId;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightWithIds;
}
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightWithIds);
MARK_REF_PTR_T(::GlobalNamespace::__LightWithIds__LightWithId);
// Type: ::LightWithId
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightWithIds::LightWithId*
class CORDL_TYPE __LightWithIds__LightWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _color, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color))::UnityEngine::Color _color;

  /// @brief Field _isRegistered, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__isRegistered, put = __cordl_internal_set__isRegistered)) bool _isRegistered;

  /// @brief Field _lightId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__lightId, put = __cordl_internal_set__lightId)) int32_t _lightId;

  /// @brief Field _parentLightWithIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__parentLightWithIds, put = __cordl_internal_set__parentLightWithIds))::UnityW<::GlobalNamespace::LightWithIds> _parentLightWithIds;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  __declspec(property(get = get_isRegistered)) bool isRegistered;

  __declspec(property(get = get_lightId)) int32_t lightId;

  /// @brief Convert operator to "::GlobalNamespace::ILightWithId"
  constexpr operator ::GlobalNamespace::ILightWithId*() noexcept;

  /// @brief Method ColorWasSet, addr 0x251ff28, size 0x28, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color newColor);

  static inline ::GlobalNamespace::__LightWithIds__LightWithId* New_ctor();

  static inline ::GlobalNamespace::__LightWithIds__LightWithId* New_ctor(int32_t lightId);

  /// @brief Method __SetIsRegistered, addr 0x25228c0, size 0xc, virtual true, abstract: false, final true
  inline void __SetIsRegistered();

  /// @brief Method __SetIsUnRegistered, addr 0x25228cc, size 0x8, virtual true, abstract: false, final true
  inline void __SetIsUnRegistered();

  /// @brief Method __SetParentLightWithIds, addr 0x25228d4, size 0x8, virtual false, abstract: false, final false
  inline void __SetParentLightWithIds(::GlobalNamespace::LightWithIds* parentLightWithIds);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr bool const& __cordl_internal_get__isRegistered() const;

  constexpr bool& __cordl_internal_get__isRegistered();

  constexpr int32_t const& __cordl_internal_get__lightId() const;

  constexpr int32_t& __cordl_internal_get__lightId();

  constexpr ::UnityW<::GlobalNamespace::LightWithIds> const& __cordl_internal_get__parentLightWithIds() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIds>& __cordl_internal_get__parentLightWithIds();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__isRegistered(bool value);

  constexpr void __cordl_internal_set__lightId(int32_t value);

  constexpr void __cordl_internal_set__parentLightWithIds(::UnityW<::GlobalNamespace::LightWithIds> value);

  /// @brief Method .ctor, addr 0x2520994, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x251feb8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId);

  /// @brief Method get_color, addr 0x25228ac, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_isRegistered, addr 0x25228b8, size 0x8, virtual true, abstract: false, final true
  inline bool get_isRegistered();

  /// @brief Method get_lightId, addr 0x25228a4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_lightId();

  /// @brief Convert to "::GlobalNamespace::ILightWithId"
  constexpr ::GlobalNamespace::ILightWithId* i___GlobalNamespace__ILightWithId() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightWithIds__LightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__LightWithIds__LightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightWithIds__LightWithId(__LightWithIds__LightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightWithIds__LightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightWithIds__LightWithId(__LightWithIds__LightWithId const&) = delete;

  /// @brief Field _lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _color, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _isRegistered, offset: 0x24, size: 0x1, def value: None
  bool ____isRegistered;

  /// @brief Field _parentLightWithIds, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIds> ____parentLightWithIds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightWithIds__LightWithId, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightWithIds__LightWithId, ____lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightWithIds__LightWithId, ____color) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightWithIds__LightWithId, ____isRegistered) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightWithIds__LightWithId, ____parentLightWithIds) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightWithIds
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightWithIds*
class CORDL_TYPE LightWithIds : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LightWithId = ::GlobalNamespace::__LightWithIds__LightWithId;

  /// @brief Field _childrenColorWasSet, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__childrenColorWasSet, put = __cordl_internal_set__childrenColorWasSet)) bool _childrenColorWasSet;

  /// @brief Field _isRegistered, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isRegistered, put = __cordl_internal_set__isRegistered)) bool _isRegistered;

  /// @brief Field _lightManager, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__lightManager, put = __cordl_internal_set__lightManager))::UnityW<::GlobalNamespace::LightWithIdManager> _lightManager;

  /// @brief Field _lightWithIds, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightWithIds,
                      put = __cordl_internal_set__lightWithIds))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* _lightWithIds;

  __declspec(property(get = get_lightWithIds))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* lightWithIds;

  /// @brief Method Awake, addr 0x2520a30, size 0x38, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetLightWithIds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds();

  /// @brief Method HandleLightManagerDidChangeSomeColorsThisFrame, addr 0x2522888, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLightManagerDidChangeSomeColorsThisFrame();

  /// @brief Method MarkChildrenColorAsSet, addr 0x25224dc, size 0xc, virtual false, abstract: false, final false
  inline void MarkChildrenColorAsSet();

  static inline ::GlobalNamespace::LightWithIds* New_ctor();

  /// @brief Method OnDisable, addr 0x2522884, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x251f8b8, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ProcessNewColorData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessNewColorData();

  /// @brief Method RegisterForColorChanges, addr 0x2522114, size 0x3c8, virtual false, abstract: false, final false
  inline void RegisterForColorChanges();

  /// @brief Method SetNewLightsWithIds, addr 0x25220e8, size 0x28, virtual false, abstract: false, final false
  inline void SetNewLightsWithIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* lightsWithIds);

  /// @brief Method Start, addr 0x2522110, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnregisterFromColorChanges, addr 0x25224e8, size 0x39c, virtual false, abstract: false, final false
  inline void UnregisterFromColorChanges();

  constexpr bool const& __cordl_internal_get__childrenColorWasSet() const;

  constexpr bool& __cordl_internal_get__childrenColorWasSet();

  constexpr bool const& __cordl_internal_get__isRegistered() const;

  constexpr bool& __cordl_internal_get__isRegistered();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>*& __cordl_internal_get__lightWithIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>*> const& __cordl_internal_get__lightWithIds() const;

  constexpr void __cordl_internal_set__childrenColorWasSet(bool value);

  constexpr void __cordl_internal_set__isRegistered(bool value);

  constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr void __cordl_internal_set__lightWithIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* value);

  /// @brief Method .ctor, addr 0x251fe80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightWithIds, addr 0x25220e0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* get_lightWithIds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightWithIds();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightWithIds(LightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightWithIds(LightWithIds const&) = delete;

  /// @brief Field _lightManager, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightManager;

  /// @brief Field _lightWithIds, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* ____lightWithIds;

  /// @brief Field _isRegistered, offset: 0x28, size: 0x1, def value: None
  bool ____isRegistered;

  /// @brief Field _childrenColorWasSet, offset: 0x29, size: 0x1, def value: None
  bool ____childrenColorWasSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightWithIds, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds, ____lightManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds, ____lightWithIds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds, ____isRegistered) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds, ____childrenColorWasSet) == 0x29, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightWithIds*, "", "LightWithIds");
NEED_NO_BOX(::GlobalNamespace::__LightWithIds__LightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightWithIds__LightWithId*, "", "LightWithIds/LightWithId");
