#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClipLoaderSO)
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class __AudioClipLoaderSO___LoadAudioFileCoroutine_d__3;
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
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipLoaderSO;
}
namespace GlobalNamespace {
class __AudioClipLoaderSO___LoadAudioFileCoroutine_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioClipLoaderSO);
MARK_REF_PTR_T(::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3);
// Type: ::<LoadAudioFileCoroutine>d__3
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4030))
// CS Name: ::AudioClipLoaderSO::<LoadAudioFileCoroutine>d__3*
class CORDL_TYPE __AudioClipLoaderSO___LoadAudioFileCoroutine_d__3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field filePath, offset 0x20, size 0x8
  __declspec(property(get = __get_filePath, put = __set_filePath))::StringW filePath;

  /// @brief Field finishCallback, offset 0x28, size 0x8
  __declspec(property(get = __get_finishCallback, put = __set_finishCallback))::System::Action_1<::UnityEngine::AudioClip*>* finishCallback;

  /// @brief Field <>4__this, offset 0x30, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::AudioClipLoaderSO* __4__this;

  /// @brief Field <www>5__2, offset 0x38, size 0x8
  __declspec(property(get = __get__www_5__2, put = __set__www_5__2))::UnityEngine::Networking::UnityWebRequest* _www_5__2;

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

  constexpr ::StringW& __get_filePath();

  constexpr ::StringW const& __get_filePath() const;

  constexpr void __set_filePath(::StringW value);

  constexpr ::System::Action_1<::UnityEngine::AudioClip*>*& __get_finishCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::AudioClip*>*> const& __get_finishCallback() const;

  constexpr void __set_finishCallback(::System::Action_1<::UnityEngine::AudioClip*>* value);

  constexpr ::GlobalNamespace::AudioClipLoaderSO*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipLoaderSO*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::AudioClipLoaderSO* value);

  constexpr ::UnityEngine::Networking::UnityWebRequest*& __get__www_5__2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> const& __get__www_5__2() const;

  constexpr void __set__www_5__2(::UnityEngine::Networking::UnityWebRequest* value);

  static inline ::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x20c9d20 size 0x28 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x20c9d50 size 0x1c virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x20c9d6c size 0x260 virtual true final true
  inline bool MoveNext();

  /// @brief Method <>m__Finally1 addr 0x20c9fcc size 0xb0 virtual false final false
  inline void __m__Finally1();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20ca07c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x20ca084 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x20ca0c4 size 0x8 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioClipLoaderSO___LoadAudioFileCoroutine_d__3(__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioClipLoaderSO___LoadAudioFileCoroutine_d__3(__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClipLoaderSO___LoadAudioFileCoroutine_d__3();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
  ::StringW ___filePath;

  /// @brief Field finishCallback, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::AudioClip*>* ___finishCallback;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipLoaderSO* _____4__this;

  /// @brief Field <www>5__2, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* ____www_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3, ___filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3, ___finishCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3, ____www_5__2) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AudioClipLoaderSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13879))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4031))
// CS Name: ::AudioClipLoaderSO*
class CORDL_TYPE AudioClipLoaderSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using _LoadAudioFileCoroutine_d__3 = ::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3;

  /// @brief Field _isLoading, offset 0x18, size 0x1
  __declspec(property(get = __get__isLoading, put = __set__isLoading)) bool _isLoading;

  constexpr bool& __get__isLoading();

  constexpr bool const& __get__isLoading() const;

  constexpr void __set__isLoading(bool value);

  /// @brief Method OnEnable addr 0x20c9bcc size 0x1c virtual true final false
  inline void OnEnable();

  /// @brief Method LoadAudioFile addr 0x20c9be8 size 0xbc virtual false final false
  inline void LoadAudioFile(::StringW filePath, ::System::Action_1<::UnityEngine::AudioClip*>* finishCallback);

  /// @brief Method LoadAudioFileCoroutine addr 0x20c9ca4 size 0x7c virtual false final false
  inline ::System::Collections::IEnumerator* LoadAudioFileCoroutine(::StringW filePath, ::System::Action_1<::UnityEngine::AudioClip*>* finishCallback);

  static inline ::GlobalNamespace::AudioClipLoaderSO* New_ctor();

  /// @brief Method .ctor addr 0x20c9d48 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipLoaderSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipLoaderSO(AudioClipLoaderSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipLoaderSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipLoaderSO(AudioClipLoaderSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipLoaderSO();

public:
  /// @brief Field _isLoading, offset: 0x18, size: 0x1, def value: None
  bool ____isLoading;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipLoaderSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipLoaderSO, ____isLoading) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioClipLoaderSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipLoaderSO*, "", "AudioClipLoaderSO");
NEED_NO_BOX(::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioClipLoaderSO___LoadAudioFileCoroutine_d__3*, "", "AudioClipLoaderSO/<LoadAudioFileCoroutine>d__3");
