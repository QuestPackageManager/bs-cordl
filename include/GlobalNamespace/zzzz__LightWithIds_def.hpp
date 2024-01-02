#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightWithIds)
namespace GlobalNamespace {
class __LightWithIds__LightWithId;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class ILightWithId;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14543))
// CS Name: ::LightWithIds::LightWithId*
class CORDL_TYPE __LightWithIds__LightWithId : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lightId, offset 0x10, size 0x4
  __declspec(property(get = __get__lightId, put = __set__lightId)) int32_t _lightId;

  /// @brief Field _color, offset 0x14, size 0x10
  __declspec(property(get = __get__color, put = __set__color))::UnityEngine::Color _color;

  /// @brief Field _isRegistered, offset 0x24, size 0x1
  __declspec(property(get = __get__isRegistered, put = __set__isRegistered)) bool _isRegistered;

  /// @brief Field _parentLightWithIds, offset 0x28, size 0x8
  __declspec(property(get = __get__parentLightWithIds, put = __set__parentLightWithIds))::GlobalNamespace::LightWithIds* _parentLightWithIds;

  __declspec(property(get = get_lightId)) int32_t lightId;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  __declspec(property(get = get_isRegistered)) bool isRegistered;

  /// @brief Convert operator to "::GlobalNamespace::ILightWithId"
  constexpr operator ::GlobalNamespace::ILightWithId*() noexcept;

  constexpr int32_t& __get__lightId();

  constexpr int32_t const& __get__lightId() const;

  constexpr void __set__lightId(int32_t value);

  constexpr ::UnityEngine::Color& __get__color();

  constexpr ::UnityEngine::Color const& __get__color() const;

  constexpr void __set__color(::UnityEngine::Color value);

  constexpr bool& __get__isRegistered();

  constexpr bool const& __get__isRegistered() const;

  constexpr void __set__isRegistered(bool value);

  constexpr ::GlobalNamespace::LightWithIds*& __get__parentLightWithIds();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIds*> const& __get__parentLightWithIds() const;

  constexpr void __set__parentLightWithIds(::GlobalNamespace::LightWithIds* value);

  /// @brief Method get_lightId, addr 0x21119a0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_lightId();

  /// @brief Method get_color, addr 0x21119a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_isRegistered, addr 0x21119b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_isRegistered();

  /// @brief Method __SetIsRegistered, addr 0x21119bc, size 0xc, virtual true, abstract: false, final true
  inline void __SetIsRegistered();

  /// @brief Method __SetIsUnRegistered, addr 0x21119c8, size 0x8, virtual true, abstract: false, final true
  inline void __SetIsUnRegistered();

  static inline ::GlobalNamespace::__LightWithIds__LightWithId* New_ctor();

  /// @brief Method .ctor, addr 0x210fa90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__LightWithIds__LightWithId* New_ctor(int32_t lightId);

  /// @brief Method .ctor, addr 0x210eff0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t lightId);

  /// @brief Method __SetParentLightWithIds, addr 0x21119d0, size 0x8, virtual false, abstract: false, final false
  inline void __SetParentLightWithIds(::GlobalNamespace::LightWithIds* parentLightWithIds);

  /// @brief Method ColorWasSet, addr 0x210f060, size 0x28, virtual true, abstract: false, final false
  inline void ColorWasSet(::UnityEngine::Color newColor);

  // Ctor Parameters [CppParam { name: "", ty: "__LightWithIds__LightWithId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __LightWithIds__LightWithId(__LightWithIds__LightWithId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__LightWithIds__LightWithId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __LightWithIds__LightWithId(__LightWithIds__LightWithId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightWithIds__LightWithId();

public:
  /// @brief Field _lightId, offset: 0x10, size: 0x4, def value: None
  int32_t ____lightId;

  /// @brief Field _color, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _isRegistered, offset: 0x24, size: 0x1, def value: None
  bool ____isRegistered;

  /// @brief Field _parentLightWithIds, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::LightWithIds* ____parentLightWithIds;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14544))
// CS Name: ::LightWithIds*
class CORDL_TYPE LightWithIds : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using LightWithId = ::GlobalNamespace::__LightWithIds__LightWithId;

  /// @brief Field _lightManager, offset 0x18, size 0x8
  __declspec(property(get = __get__lightManager, put = __set__lightManager))::GlobalNamespace::LightWithIdManager* _lightManager;

  /// @brief Field _lightWithIds, offset 0x20, size 0x8
  __declspec(property(get = __get__lightWithIds, put = __set__lightWithIds))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* _lightWithIds;

  /// @brief Field _isRegistered, offset 0x28, size 0x1
  __declspec(property(get = __get__isRegistered, put = __set__isRegistered)) bool _isRegistered;

  /// @brief Field _childrenColorWasSet, offset 0x29, size 0x1
  __declspec(property(get = __get__childrenColorWasSet, put = __set__childrenColorWasSet)) bool _childrenColorWasSet;

  __declspec(property(get = get_lightWithIds))::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* lightWithIds;

  constexpr ::GlobalNamespace::LightWithIdManager*& __get__lightManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightWithIdManager*> const& __get__lightManager() const;

  constexpr void __set__lightManager(::GlobalNamespace::LightWithIdManager* value);

  constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>*& __get__lightWithIds();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>*> const& __get__lightWithIds() const;

  constexpr void __set__lightWithIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* value);

  constexpr bool& __get__isRegistered();

  constexpr bool const& __get__isRegistered() const;

  constexpr void __set__isRegistered(bool value);

  constexpr bool& __get__childrenColorWasSet();

  constexpr bool const& __get__childrenColorWasSet() const;

  constexpr void __set__childrenColorWasSet(bool value);

  /// @brief Method get_lightWithIds, addr 0x21111dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* get_lightWithIds();

  /// @brief Method Awake, addr 0x210fb2c, size 0x38, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x211120c, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnEnable, addr 0x210e9f0, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method MarkChildrenColorAsSet, addr 0x21115d8, size 0xc, virtual false, abstract: false, final false
  inline void MarkChildrenColorAsSet();

  /// @brief Method SetNewLightsWithIds, addr 0x21111e4, size 0x28, virtual false, abstract: false, final false
  inline void SetNewLightsWithIds(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* lightsWithIds);

  /// @brief Method GetLightWithIds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__LightWithIds__LightWithId*>* GetLightWithIds();

  /// @brief Method RegisterForColorChanges, addr 0x2111210, size 0x3c8, virtual false, abstract: false, final false
  inline void RegisterForColorChanges();

  /// @brief Method UnregisterFromColorChanges, addr 0x21115e4, size 0x39c, virtual false, abstract: false, final false
  inline void UnregisterFromColorChanges();

  /// @brief Method OnDisable, addr 0x2111980, size 0x4, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method HandleLightManagerDidChangeSomeColorsThisFrame, addr 0x2111984, size 0x1c, virtual false, abstract: false, final false
  inline void HandleLightManagerDidChangeSomeColorsThisFrame();

  /// @brief Method ProcessNewColorData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessNewColorData();

  static inline ::GlobalNamespace::LightWithIds* New_ctor();

  /// @brief Method .ctor, addr 0x210efb8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIds", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightWithIds(LightWithIds&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightWithIds", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightWithIds(LightWithIds const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightWithIds();

public:
  /// @brief Field _lightManager, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::LightWithIdManager* ____lightManager;

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
