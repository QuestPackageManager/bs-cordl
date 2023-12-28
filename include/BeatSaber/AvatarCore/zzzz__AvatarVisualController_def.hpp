#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarVisualController)
namespace BeatSaber::AvatarCore {
class AvatarController;
}
namespace BeatSaber::AvatarCore {
class __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarVisualController;
}
namespace BeatSaber::AvatarCore {
class __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarVisualController);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2);
// Type: ::<WaitForAvatarLoadAndSetLightColor>d__2
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15184))
// CS Name: ::AvatarVisualController::<WaitForAvatarLoadAndSetLightColor>d__2*
class CORDL_TYPE __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::BeatSaber::AvatarCore::AvatarVisualController* __4__this;

  /// @brief Field color, offset 0x28, size 0x10
  __declspec(property(get = __get_color, put = __set_color))::UnityEngine::Color color;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::BeatSaber::AvatarCore::AvatarVisualController*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarVisualController*> const& __get___4__this() const;

  constexpr void __set___4__this(::BeatSaber::AvatarCore::AvatarVisualController* value);

  constexpr ::UnityEngine::Color& __get_color();

  constexpr ::UnityEngine::Color const& __get_color() const;

  constexpr void __set_color(::UnityEngine::Color value);

  static inline ::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0xe0eb00 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0xe0eb38 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0xe0eb3c size 0xc8 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0xe0ec04 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0xe0ec0c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0xe0ec4c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2(__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2(__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarVisualController* _____4__this;

  /// @brief Field color, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2, 0x38>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
// Type: BeatSaber.AvatarCore::AvatarVisualController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15185))
// CS Name: ::BeatSaber.AvatarCore::AvatarVisualController*
class CORDL_TYPE AvatarVisualController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _WaitForAvatarLoadAndSetLightColor_d__2 = ::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2;

  /// @brief Field _avatarController, offset 0x18, size 0x8
  __declspec(property(get = __get__avatarController, put = __set__avatarController))::BeatSaber::AvatarCore::AvatarController* _avatarController;

  constexpr ::BeatSaber::AvatarCore::AvatarController*& __get__avatarController();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarController*> const& __get__avatarController() const;

  constexpr void __set__avatarController(::BeatSaber::AvatarCore::AvatarController* value);

  /// @brief Method SetLightColor addr 0xe0e934 size 0x13c virtual false final false
  inline void SetLightColor(::UnityEngine::Color color);

  /// @brief Method WaitForAvatarLoadAndSetLightColor addr 0xe0ea70 size 0x90 virtual false final false
  inline ::System::Collections::IEnumerator* WaitForAvatarLoadAndSetLightColor(::UnityEngine::Color color);

  /// @brief Method __SetAvatarController addr 0xe0eb28 size 0x8 virtual false final false
  inline void __SetAvatarController(::BeatSaber::AvatarCore::AvatarController* avatarController);

  static inline ::BeatSaber::AvatarCore::AvatarVisualController* New_ctor();

  /// @brief Method .ctor addr 0xe0eb30 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AvatarVisualController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarVisualController(AvatarVisualController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarVisualController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarVisualController(AvatarVisualController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarVisualController();

public:
  /// @brief Field _avatarController, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::AvatarCore::AvatarController* ____avatarController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarVisualController, 0x20>, "Size mismatch!");

} // namespace BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarVisualController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarVisualController*, "BeatSaber.AvatarCore", "AvatarVisualController");
NEED_NO_BOX(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2*, "BeatSaber.AvatarCore",
                       "AvatarVisualController/<WaitForAvatarLoadAndSetLightColor>d__2");
