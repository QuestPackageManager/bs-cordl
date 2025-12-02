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
class LightWithIds_LightWithId;
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
class LightWithIds_LightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightWithIds);
MARK_REF_PTR_T(::GlobalNamespace::LightWithIds_LightWithId);
// Dependencies System.Object, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightWithIds/LightWithId
class CORDL_TYPE LightWithIds_LightWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _color, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _isRegistered, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__isRegistered, put = __cordl_internal_set__isRegistered)) bool _isRegistered;

  /// @brief Field _lightId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__lightId, put = __cordl_internal_set__lightId)) int32_t _lightId;

  /// @brief Field _parentLightWithIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__parentLightWithIds, put = __cordl_internal_set__parentLightWithIds)) ::UnityW<::GlobalNamespace::LightWithIds> _parentLightWithIds;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_isRegistered)) bool isRegistered;

  __declspec(property(get = get_lightId)) int32_t lightId;

  /// @brief Convert operator to "::GlobalNamespace::ILightWithId"
  constexpr operator ::GlobalNamespace::ILightWithId*() noexcept;

  /// @brief Method ColorWasSet, addr 0x5658950, size 0x24, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color newColor);

  static inline ::GlobalNamespace::LightWithIds_LightWithId* New_ctor();

  static inline ::GlobalNamespace::LightWithIds_LightWithId* New_ctor(int32_t lightId);

  /// @brief Method __SetIsRegistered, addr 0x565b204, size 0xc, virtual true, abstract: false, final true
  inline void __SetIsRegistered();

  /// @brief Method __SetIsUnRegistered, addr 0x565b210, size 0x8, virtual true, abstract: false, final true
  inline void __SetIsUnRegistered();

  /// @brief Method __SetParentLightWithIds, addr 0x565b218, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x56595a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x5658908, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId);

  /// @brief Method get_color, addr 0x565b1f0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_isRegistered, addr 0x565b1fc, size 0x8, virtual true, abstract: false, final true
  inline bool get_isRegistered();

  /// @brief Method get_lightId, addr 0x565b1e8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_lightId();

  /// @brief Convert to "::GlobalNamespace::ILightWithId"
  constexpr ::GlobalNamespace::ILightWithId* i___GlobalNamespace__ILightWithId() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightWithIds_LightWithId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightWithIds_LightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightWithIds_LightWithId(LightWithIds_LightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIds_LightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightWithIds_LightWithId(LightWithIds_LightWithId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19708 };

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
static_assert(offsetof(::GlobalNamespace::LightWithIds_LightWithId, ____lightId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds_LightWithId, ____color) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds_LightWithId, ____isRegistered) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds_LightWithId, ____parentLightWithIds) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightWithIds_LightWithId, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightWithIds
class CORDL_TYPE LightWithIds : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LightWithId = ::GlobalNamespace::LightWithIds_LightWithId;

  /// @brief Field _childrenColorWasSet, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get__childrenColorWasSet, put = __cordl_internal_set__childrenColorWasSet)) bool _childrenColorWasSet;

  /// @brief Field _isRegistered, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isRegistered, put = __cordl_internal_set__isRegistered)) bool _isRegistered;

  /// @brief Field _lightManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__lightManager, put = __cordl_internal_set__lightManager)) ::UnityW<::GlobalNamespace::LightWithIdManager> _lightManager;

  /// @brief Field _lightWithIds, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__lightWithIds,
                      put = __cordl_internal_set__lightWithIds)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* _lightWithIds;

  __declspec(property(get = get_lightWithIds)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* lightWithIds;

  /// @brief Method Awake, addr 0x5659634, size 0x38, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetLightWithIds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* GetLightWithIds();

  /// @brief Method HandleLightManagerDidChangeSomeColorsThisFrame, addr 0x565b1cc, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLightManagerDidChangeSomeColorsThisFrame();

  /// @brief Method MarkChildrenColorAsSet, addr 0x565ae0c, size 0xc, virtual false, abstract: false, final false
  inline void MarkChildrenColorAsSet();

  static inline ::GlobalNamespace::LightWithIds* New_ctor();

  /// @brief Method OnDisable, addr 0x565b1c8, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5658290, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ProcessNewColorData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ProcessNewColorData();

  /// @brief Method RegisterForColorChanges, addr 0x565aa30, size 0x3dc, virtual false, abstract: false, final false
  inline void RegisterForColorChanges();

  /// @brief Method SetNewLightsWithIds, addr 0x565aa04, size 0x28, virtual false, abstract: false, final false
  inline void SetNewLightsWithIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* lightsWithIds);

  /// @brief Method Start, addr 0x565aa2c, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UnregisterFromColorChanges, addr 0x565ae18, size 0x3b0, virtual false, abstract: false, final false
  inline void UnregisterFromColorChanges();

  constexpr bool const& __cordl_internal_get__childrenColorWasSet() const;

  constexpr bool& __cordl_internal_get__childrenColorWasSet();

  constexpr bool const& __cordl_internal_get__isRegistered() const;

  constexpr bool& __cordl_internal_get__isRegistered();

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

  constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager();

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* const& __cordl_internal_get__lightWithIds() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>*& __cordl_internal_get__lightWithIds();

  constexpr void __cordl_internal_set__childrenColorWasSet(bool value);

  constexpr void __cordl_internal_set__isRegistered(bool value);

  constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager> value);

  constexpr void __cordl_internal_set__lightWithIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* value);

  /// @brief Method .ctor, addr 0x56588f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lightWithIds, addr 0x565a9fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* get_lightWithIds();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19709 };

  /// @brief Field _lightManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LightWithIdManager> ____lightManager;

  /// @brief Field _lightWithIds, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::LightWithIds_LightWithId*>* ____lightWithIds;

  /// @brief Field _isRegistered, offset: 0x30, size: 0x1, def value: None
  bool ____isRegistered;

  /// @brief Field _childrenColorWasSet, offset: 0x31, size: 0x1, def value: None
  bool ____childrenColorWasSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightWithIds, ____lightManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds, ____lightWithIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds, ____isRegistered) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightWithIds, ____childrenColorWasSet) == 0x31, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightWithIds, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightWithIds*, "", "LightWithIds");
NEED_NO_BOX(::GlobalNamespace::LightWithIds_LightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightWithIds_LightWithId*, "", "LightWithIds/LightWithId");
