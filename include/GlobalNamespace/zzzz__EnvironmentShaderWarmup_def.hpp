#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnvironmentShaderWarmup)
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class __EnvironmentShaderWarmup___Start_d__6;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentShaderWarmup;
}
namespace GlobalNamespace {
class __EnvironmentShaderWarmup___Start_d__6;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentShaderWarmup);
MARK_REF_PTR_T(::GlobalNamespace::__EnvironmentShaderWarmup___Start_d__6);
// Type: ::<Start>d__6
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3955))
// CS Name: ::EnvironmentShaderWarmup::<Start>d__6*
class CORDL_TYPE __EnvironmentShaderWarmup___Start_d__6 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::EnvironmentShaderWarmup* __4__this;

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

  constexpr ::GlobalNamespace::EnvironmentShaderWarmup*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentShaderWarmup*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::EnvironmentShaderWarmup* value);

  static inline ::GlobalNamespace::__EnvironmentShaderWarmup___Start_d__6* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x2216cac size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x2216cdc size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x2216ce0 size 0x444 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2217124 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x221712c size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x221716c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentShaderWarmup___Start_d__6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EnvironmentShaderWarmup___Start_d__6(__EnvironmentShaderWarmup___Start_d__6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EnvironmentShaderWarmup___Start_d__6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EnvironmentShaderWarmup___Start_d__6(__EnvironmentShaderWarmup___Start_d__6 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EnvironmentShaderWarmup___Start_d__6();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentShaderWarmup* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__EnvironmentShaderWarmup___Start_d__6, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::EnvironmentShaderWarmup
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3956))
// CS Name: ::EnvironmentShaderWarmup*
class CORDL_TYPE EnvironmentShaderWarmup : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Start_d__6 = ::GlobalNamespace::__EnvironmentShaderWarmup___Start_d__6;

  /// @brief Field _materials, offset 0x18, size 0x8
  __declspec(property(get = __get__materials, put = __set__materials))::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> _materials;

  /// @brief Field _mainCamera, offset 0x20, size 0x8
  __declspec(property(get = __get__mainCamera, put = __set__mainCamera))::GlobalNamespace::MainCamera* _mainCamera;

  /// @brief Field _gameScenesManager, offset 0x28, size 0x8
  __declspec(property(get = __get__gameScenesManager, put = __set__gameScenesManager))::GlobalNamespace::GameScenesManager* _gameScenesManager;

  /// @brief Field _parentingTransform, offset 0x30, size 0x8
  __declspec(property(get = __get__parentingTransform, put = __set__parentingTransform))::UnityEngine::Transform* _parentingTransform;

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>& __get__materials();

  constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> const& __get__materials() const;

  constexpr void __set__materials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value);

  constexpr ::GlobalNamespace::MainCamera*& __get__mainCamera();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> const& __get__mainCamera() const;

  constexpr void __set__mainCamera(::GlobalNamespace::MainCamera* value);

  constexpr ::GlobalNamespace::GameScenesManager*& __get__gameScenesManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& __get__gameScenesManager() const;

  constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager* value);

  constexpr ::UnityEngine::Transform*& __get__parentingTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__parentingTransform() const;

  constexpr void __set__parentingTransform(::UnityEngine::Transform* value);

  /// @brief Method Start addr 0x2216c44 size 0x68 virtual false final false
  inline ::System::Collections::IEnumerator* Start();

  static inline ::GlobalNamespace::EnvironmentShaderWarmup* New_ctor();

  /// @brief Method .ctor addr 0x2216cd4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentShaderWarmup(EnvironmentShaderWarmup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentShaderWarmup(EnvironmentShaderWarmup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentShaderWarmup();

public:
  /// @brief Field _materials, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> ____materials;

  /// @brief Field _mainCamera, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MainCamera* ____mainCamera;

  /// @brief Field _gameScenesManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameScenesManager* ____gameScenesManager;

  /// @brief Field _parentingTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ____parentingTransform;

  /// @brief Field kNumberOfColumns offset 0xffffffff size 0x4
  static constexpr int32_t kNumberOfColumns{ static_cast<int32_t>(0x4) };

  /// @brief Field kNumberOfRows offset 0xffffffff size 0x4
  static constexpr int32_t kNumberOfRows{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentShaderWarmup, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentShaderWarmup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentShaderWarmup*, "", "EnvironmentShaderWarmup");
NEED_NO_BOX(::GlobalNamespace::__EnvironmentShaderWarmup___Start_d__6);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__EnvironmentShaderWarmup___Start_d__6*, "", "EnvironmentShaderWarmup/<Start>d__6");
