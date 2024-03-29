#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleTextureLoader)
namespace BGLib::DotnetExtension::Collections {
template <typename TKey, typename TValue> class LRUCache_2;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
namespace GlobalNamespace {
class __SimpleTextureLoader___LoadTextureCoroutine_d__3;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleTextureLoader;
}
namespace GlobalNamespace {
class __SimpleTextureLoader___LoadTextureCoroutine_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleTextureLoader);
MARK_REF_PTR_T(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3);
// Type: ::<LoadTextureCoroutine>d__3
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleTextureLoader::<LoadTextureCoroutine>d__3*
class CORDL_TYPE __SimpleTextureLoader___LoadTextureCoroutine_d__3 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::GlobalNamespace::SimpleTextureLoader* __4__this;

  /// @brief Field <uwr>5__2, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__uwr_5__2, put = __cordl_internal_set__uwr_5__2))::UnityEngine::Networking::UnityWebRequest* _uwr_5__2;

  /// @brief Field filePath, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_filePath, put = __cordl_internal_set_filePath))::StringW filePath;

  /// @brief Field finishedCallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedCallback, put = __cordl_internal_set_finishedCallback))::System::Action_1<::UnityW<::UnityEngine::Texture2D>>* finishedCallback;

  /// @brief Field useCache, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_useCache, put = __cordl_internal_set_useCache)) bool useCache;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x22b1a0c, size 0x270, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x22b1d2c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x22b1d34, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x22b1d74, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x22b19f0, size 0x1c, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::GlobalNamespace::SimpleTextureLoader*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleTextureLoader*> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__uwr_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> const& __cordl_internal_get__uwr_5__2() const;

  constexpr ::StringW const& __cordl_internal_get_filePath() const;

  constexpr ::StringW& __cordl_internal_get_filePath();

  constexpr ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_finishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get_finishedCallback() const;

  constexpr bool const& __cordl_internal_get_useCache() const;

  constexpr bool& __cordl_internal_get_useCache();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::SimpleTextureLoader* value);

  constexpr void __cordl_internal_set__uwr_5__2(::UnityEngine::Networking::UnityWebRequest* value);

  constexpr void __cordl_internal_set_filePath(::StringW value);

  constexpr void __cordl_internal_set_finishedCallback(::System::Action_1<::UnityW<::UnityEngine::Texture2D>>* value);

  constexpr void __cordl_internal_set_useCache(bool value);

  /// @brief Method <>m__Finally1, addr 0x22b1c7c, size 0xb0, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method .ctor, addr 0x22b1948, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleTextureLoader___LoadTextureCoroutine_d__3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SimpleTextureLoader___LoadTextureCoroutine_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SimpleTextureLoader___LoadTextureCoroutine_d__3(__SimpleTextureLoader___LoadTextureCoroutine_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SimpleTextureLoader___LoadTextureCoroutine_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SimpleTextureLoader___LoadTextureCoroutine_d__3(__SimpleTextureLoader___LoadTextureCoroutine_d__3 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field useCache, offset: 0x20, size: 0x1, def value: None
  bool ___useCache;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SimpleTextureLoader* _____4__this;

  /// @brief Field filePath, offset: 0x30, size: 0x8, def value: None
  ::StringW ___filePath;

  /// @brief Field finishedCallback, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>* ___finishedCallback;

  /// @brief Field <uwr>5__2, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* ____uwr_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3, ___useCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3, ___filePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3, ___finishedCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3, ____uwr_5__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SimpleTextureLoader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SimpleTextureLoader*
class CORDL_TYPE SimpleTextureLoader : public ::System::Object {
public:
  // Declarations
  using _LoadTextureCoroutine_d__3 = ::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3;

  /// @brief Field _cache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cache, put = __cordl_internal_set__cache))::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Texture2D>>* _cache;

  /// @brief Field _coroutineStarter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__coroutineStarter, put = __cordl_internal_set__coroutineStarter))::GlobalNamespace::ICoroutineStarter* _coroutineStarter;

  /// @brief Method LoadTexture, addr 0x22b17e8, size 0xd0, virtual false, abstract: false, final false
  inline void LoadTexture(::StringW filePath, bool useCache, ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>* finishedCallback);

  /// @brief Method LoadTextureCoroutine, addr 0x22b18b8, size 0x90, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* LoadTextureCoroutine(::StringW filePath, bool useCache, ::System::Action_1<::UnityW<::UnityEngine::Texture2D>>* finishedCallback);

  static inline ::GlobalNamespace::SimpleTextureLoader* New_ctor();

  constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get__cache();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get__cache() const;

  constexpr ::GlobalNamespace::ICoroutineStarter*& __cordl_internal_get__coroutineStarter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& __cordl_internal_get__coroutineStarter() const;

  constexpr void __cordl_internal_set__cache(::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Texture2D>>* value);

  constexpr void __cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter* value);

  /// @brief Method .ctor, addr 0x22b1970, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleTextureLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextureLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleTextureLoader(SimpleTextureLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleTextureLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleTextureLoader(SimpleTextureLoader const&) = delete;

  /// @brief Field _cache, offset: 0x10, size: 0x8, def value: None
  ::BGLib::DotnetExtension::Collections::LRUCache_2<::StringW, ::UnityW<::UnityEngine::Texture2D>>* ____cache;

  /// @brief Field _coroutineStarter, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ICoroutineStarter* ____coroutineStarter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleTextureLoader, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTextureLoader, ____cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimpleTextureLoader, ____coroutineStarter) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleTextureLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleTextureLoader*, "", "SimpleTextureLoader");
NEED_NO_BOX(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SimpleTextureLoader___LoadTextureCoroutine_d__3*, "", "SimpleTextureLoader/<LoadTextureCoroutine>d__3");
