#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioClipAsyncLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClipAsyncLoader)
namespace GlobalNamespace {
class AudioClipAsyncLoader_LoadMethodDelegate;
}
namespace GlobalNamespace {
struct AudioClipAsyncLoader__Unload_d__18;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader___c;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader___c__DisplayClass13_0;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader___c__DisplayClass14_0;
}
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IMediaAsyncLoader;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class IReferenceCountingCache_2;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader_LoadMethodDelegate;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader___c;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader___c__DisplayClass13_0;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader___c__DisplayClass14_0;
}
namespace GlobalNamespace {
struct AudioClipAsyncLoader__Unload_d__18;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioClipAsyncLoader);
MARK_REF_PTR_T(::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate);
MARK_REF_PTR_T(::GlobalNamespace::AudioClipAsyncLoader___c);
MARK_REF_PTR_T(::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0);
MARK_REF_PTR_T(::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0);
MARK_VAL_T(::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18);
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClipAsyncLoader/LoadMethodDelegate
class CORDL_TYPE AudioClipAsyncLoader_LoadMethodDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3c1d8ec, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3c1d90c, size 0xc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3c1d8d8, size 0x14, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* Invoke();

  static inline ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3c1d560, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipAsyncLoader_LoadMethodDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader_LoadMethodDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipAsyncLoader_LoadMethodDelegate(AudioClipAsyncLoader_LoadMethodDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader_LoadMethodDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipAsyncLoader_LoadMethodDelegate(AudioClipAsyncLoader_LoadMethodDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18582 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClipAsyncLoader/<>c
class CORDL_TYPE AudioClipAsyncLoader___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::AudioClipAsyncLoader___c* __9;

  /// @brief Field <>9__16_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__16_0, put = setStaticF___9__16_0)) ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* __9__16_0;

  static inline ::GlobalNamespace::AudioClipAsyncLoader___c* New_ctor();

  /// @brief Method <Unload>b__16_0, addr 0x3c1d97c, size 0x18, virtual false, abstract: false, final false
  inline void _Unload_b__16_0(::UnityEngine::AudioClip* loadedAudioClip);

  /// @brief Method .ctor, addr 0x3c1d974, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::AudioClipAsyncLoader___c* getStaticF___9();

  static inline ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* getStaticF___9__16_0();

  static inline void setStaticF___9(::GlobalNamespace::AudioClipAsyncLoader___c* value);

  static inline void setStaticF___9__16_0(::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipAsyncLoader___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipAsyncLoader___c(AudioClipAsyncLoader___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipAsyncLoader___c(AudioClipAsyncLoader___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18583 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipAsyncLoader___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClipAsyncLoader/<>c__DisplayClass13_0
class CORDL_TYPE AudioClipAsyncLoader___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioClip, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_audioClip, put = __cordl_internal_set_audioClip)) ::UnityW<::UnityEngine::AudioClip> audioClip;

  static inline ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0* New_ctor();

  /// @brief Method <Load>b__0, addr 0x3c1d994, size 0x70, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* _Load_b__0();

  constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioClip() const;

  constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioClip();

  constexpr void __cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip> value);

  /// @brief Method .ctor, addr 0x3c1d534, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipAsyncLoader___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipAsyncLoader___c__DisplayClass13_0(AudioClipAsyncLoader___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipAsyncLoader___c__DisplayClass13_0(AudioClipAsyncLoader___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18584 };

  /// @brief Field audioClip, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioClip> ___audioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0, ___audioClip) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClipAsyncLoader/<>c__DisplayClass14_0
class CORDL_TYPE AudioClipAsyncLoader___c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::AudioClipAsyncLoader* __4__this;

  /// @brief Field audioClipFilePath, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_audioClipFilePath, put = __cordl_internal_set_audioClipFilePath)) ::StringW audioClipFilePath;

  static inline ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0* New_ctor();

  /// @brief Method <Load>b__0, addr 0x3c1da04, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* _Load_b__0();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_audioClipFilePath() const;

  constexpr ::StringW& __cordl_internal_get_audioClipFilePath();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set_audioClipFilePath(::StringW value);

  /// @brief Method .ctor, addr 0x3c1d7ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipAsyncLoader___c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader___c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipAsyncLoader___c__DisplayClass14_0(AudioClipAsyncLoader___c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader___c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipAsyncLoader___c__DisplayClass14_0(AudioClipAsyncLoader___c__DisplayClass14_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18585 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* _____4__this;

  /// @brief Field audioClipFilePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___audioClipFilePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0, ___audioClipFilePath) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: AudioClipAsyncLoader/<Unload>d__18
struct CORDL_TYPE AudioClipAsyncLoader__Unload_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3c1dab4, size 0x388, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3c1de3c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipAsyncLoader__Unload_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AudioClipAsyncLoader*", modifiers: "",
  // def_value: None }, CppParam { name: "cacheKey", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onDelete", ty: "::System::Action_1<::UnityW<::UnityEngine::AudioClip>>*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: None }]
  constexpr AudioClipAsyncLoader__Unload_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AudioClipAsyncLoader* __4__this,
                                               int32_t cacheKey, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* onDelete,
                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* __4__this;

  /// @brief Field cacheKey, offset: 0x30, size: 0x4, def value: None
  int32_t cacheKey;

  /// @brief Field onDelete, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* onDelete;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::AudioClip>> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18, cacheKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18, onDelete) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18, __u__1) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClipAsyncLoader
class CORDL_TYPE AudioClipAsyncLoader : public ::System::Object {
public:
  // Declarations
  using LoadMethodDelegate = ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate;

  using _Unload_d__18 = ::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18;

  using __c = ::GlobalNamespace::AudioClipAsyncLoader___c;

  using __c__DisplayClass13_0 = ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0;

  using __c__DisplayClass14_0 = ::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0;

  /// @brief Field _cache, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cache,
                      put = __cordl_internal_set__cache)) ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* _cache;

  /// @brief Field _mediaAsyncLoader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mediaAsyncLoader, put = __cordl_internal_set__mediaAsyncLoader)) ::GlobalNamespace::IMediaAsyncLoader* _mediaAsyncLoader;

  /// @brief Method CreateDefault, addr 0x3c1cb80, size 0xac, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::AudioClipAsyncLoader* CreateDefault();

  /// @brief Method GetCacheKey, addr 0x3c1d53c, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetCacheKey(::UnityEngine::AudioClip* audioClip);

  /// @brief Method GetCacheKey, addr 0x3c1d7b4, size 0x24, virtual false, abstract: false, final false
  inline int32_t GetCacheKey(::StringW audioClipFilePath);

  /// @brief Method Load, addr 0x3c1cd28, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* Load(::UnityEngine::AudioClip* audioClip);

  /// @brief Method Load, addr 0x3c1cf54, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* Load(::StringW audioClipFilePath);

  /// @brief Method Load, addr 0x3c1d5e8, size 0x1c4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* Load(int32_t cacheKey, ::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate* loadMethodDelegate);

  /// @brief Method Load, addr 0x3c1cdfc, size 0xac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* Load(::GlobalNamespace::IAssetSongAudioClipProvider* source);

  /// @brief Method Load, addr 0x3c1cc7c, size 0xac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* Load(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source);

  /// @brief Method Load, addr 0x3c1d028, size 0xac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* Load(::GlobalNamespace::IFilePathSongAudioClipProvider* source);

  /// @brief Method Load, addr 0x3c1cea8, size 0xac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* Load(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source);

  /// @brief Method LogError, addr 0x3c1d880, size 0x58, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  static inline ::GlobalNamespace::AudioClipAsyncLoader* New_ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* cache,
                                                                  ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader);

  /// @brief Method Unload, addr 0x3c1d180, size 0x108, virtual false, abstract: false, final false
  inline void Unload(::UnityEngine::AudioClip* audioClip);

  /// @brief Method Unload, addr 0x3c1d3e0, size 0xa8, virtual false, abstract: false, final false
  inline void Unload(::StringW audioClipFilePath);

  /// @brief Method Unload, addr 0x3c1d7d8, size 0xa8, virtual false, abstract: false, final false
  inline void Unload(int32_t cacheKey, ::System::Action_1<::UnityW<::UnityEngine::AudioClip>>* onDelete);

  /// @brief Method Unload, addr 0x3c1d288, size 0xac, virtual false, abstract: false, final false
  inline void Unload(::GlobalNamespace::IAssetSongAudioClipProvider* source);

  /// @brief Method Unload, addr 0x3c1d0d4, size 0xac, virtual false, abstract: false, final false
  inline void Unload(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source);

  /// @brief Method Unload, addr 0x3c1d488, size 0xac, virtual false, abstract: false, final false
  inline void Unload(::GlobalNamespace::IFilePathSongAudioClipProvider* source);

  /// @brief Method Unload, addr 0x3c1d334, size 0xac, virtual false, abstract: false, final false
  inline void Unload(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source);

  constexpr ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* const& __cordl_internal_get__cache() const;

  constexpr ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>*& __cordl_internal_get__cache();

  constexpr ::GlobalNamespace::IMediaAsyncLoader* const& __cordl_internal_get__mediaAsyncLoader() const;

  constexpr ::GlobalNamespace::IMediaAsyncLoader*& __cordl_internal_get__mediaAsyncLoader();

  constexpr void __cordl_internal_set__cache(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* value);

  constexpr void __cordl_internal_set__mediaAsyncLoader(::GlobalNamespace::IMediaAsyncLoader* value);

  /// @brief Method .ctor, addr 0x3c1cb54, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* cache,
                    ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipAsyncLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipAsyncLoader(AudioClipAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipAsyncLoader(AudioClipAsyncLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18587 };

  /// @brief Field _cache, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*>* ____cache;

  /// @brief Field _mediaAsyncLoader, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMediaAsyncLoader* ____mediaAsyncLoader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader, ____cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader, ____mediaAsyncLoader) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipAsyncLoader, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoader*, "", "AudioClipAsyncLoader");
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoader_LoadMethodDelegate*, "", "AudioClipAsyncLoader/LoadMethodDelegate");
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoader___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoader___c*, "", "AudioClipAsyncLoader/<>c");
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass13_0*, "", "AudioClipAsyncLoader/<>c__DisplayClass13_0");
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoader___c__DisplayClass14_0*, "", "AudioClipAsyncLoader/<>c__DisplayClass14_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoader__Unload_d__18, "", "AudioClipAsyncLoader/<Unload>d__18");
