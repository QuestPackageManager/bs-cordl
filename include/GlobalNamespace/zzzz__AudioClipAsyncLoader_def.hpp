#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClipAsyncLoader)
namespace GlobalNamespace {
class IFilePathSongAudioClipProvider;
}
namespace GlobalNamespace {
template <typename TKey, typename TValue> class IReferenceCountingCache_2;
}
namespace System {
template <typename T> class Action_1;
}
namespace GlobalNamespace {
class IAssetSongPreviewAudioClipProvider;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class __AudioClipAsyncLoader____c;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IAssetSongAudioClipProvider;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
struct __AudioClipAsyncLoader___Unload_d__21;
}
namespace GlobalNamespace {
class __AudioClipAsyncLoader____c__DisplayClass17_0;
}
namespace GlobalNamespace {
class __AudioClipAsyncLoader____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class IFilePathSongPreviewAudioClipProvider;
}
namespace GlobalNamespace {
class IMediaAsyncLoader;
}
namespace GlobalNamespace {
class __AudioClipAsyncLoader__LoadMethodDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class __AudioClipAsyncLoader__LoadMethodDelegate;
}
namespace GlobalNamespace {
class __AudioClipAsyncLoader____c;
}
namespace GlobalNamespace {
class __AudioClipAsyncLoader____c__DisplayClass16_0;
}
namespace GlobalNamespace {
class __AudioClipAsyncLoader____c__DisplayClass17_0;
}
namespace GlobalNamespace {
struct __AudioClipAsyncLoader___Unload_d__21;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioClipAsyncLoader);
MARK_REF_PTR_T(::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate);
MARK_REF_PTR_T(::GlobalNamespace::__AudioClipAsyncLoader____c);
MARK_REF_PTR_T(::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0);
MARK_REF_PTR_T(::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0);
MARK_VAL_T(::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21);
// Type: ::LoadMethodDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5883))
// CS Name: ::AudioClipAsyncLoader::LoadMethodDelegate*
class CORDL_TYPE __AudioClipAsyncLoader__LoadMethodDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x22fb378, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x22fb724, size 0x14, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Invoke();

  /// @brief Method BeginInvoke, addr 0x22fb738, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x22fb758, size 0xc, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipAsyncLoader__LoadMethodDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioClipAsyncLoader__LoadMethodDelegate(__AudioClipAsyncLoader__LoadMethodDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipAsyncLoader__LoadMethodDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioClipAsyncLoader__LoadMethodDelegate(__AudioClipAsyncLoader__LoadMethodDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClipAsyncLoader__LoadMethodDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass16_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5884))
// CS Name: ::AudioClipAsyncLoader::<>c__DisplayClass16_0*
class CORDL_TYPE __AudioClipAsyncLoader____c__DisplayClass16_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field audioClip, offset 0x10, size 0x8
  __declspec(property(get = __get_audioClip, put = __set_audioClip))::UnityEngine::AudioClip* audioClip;

  constexpr ::UnityEngine::AudioClip*& __get_audioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get_audioClip() const;

  constexpr void __set_audioClip(::UnityEngine::AudioClip* value);

  static inline ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0* New_ctor();

  /// @brief Method .ctor, addr 0x22fb350, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Load>b__0, addr 0x22fb764, size 0x70, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* _Load_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipAsyncLoader____c__DisplayClass16_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioClipAsyncLoader____c__DisplayClass16_0(__AudioClipAsyncLoader____c__DisplayClass16_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipAsyncLoader____c__DisplayClass16_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioClipAsyncLoader____c__DisplayClass16_0(__AudioClipAsyncLoader____c__DisplayClass16_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClipAsyncLoader____c__DisplayClass16_0();

public:
  /// @brief Field audioClip, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ___audioClip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0, ___audioClip) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5885))
// CS Name: ::AudioClipAsyncLoader::<>c__DisplayClass17_0*
class CORDL_TYPE __AudioClipAsyncLoader____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::GlobalNamespace::AudioClipAsyncLoader* __4__this;

  /// @brief Field audioClipFilePath, offset 0x18, size 0x8
  __declspec(property(get = __get_audioClipFilePath, put = __set_audioClipFilePath))::StringW audioClipFilePath;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __get___4__this() const;

  constexpr void __set___4__this(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr ::StringW& __get_audioClipFilePath();

  constexpr ::StringW const& __get_audioClipFilePath() const;

  constexpr void __set_audioClipFilePath(::StringW value);

  static inline ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0* New_ctor();

  /// @brief Method .ctor, addr 0x22fb5f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Load>b__0, addr 0x22fb7d4, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* _Load_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipAsyncLoader____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioClipAsyncLoader____c__DisplayClass17_0(__AudioClipAsyncLoader____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipAsyncLoader____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioClipAsyncLoader____c__DisplayClass17_0(__AudioClipAsyncLoader____c__DisplayClass17_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClipAsyncLoader____c__DisplayClass17_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* _____4__this;

  /// @brief Field audioClipFilePath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___audioClipFilePath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0, ___audioClipFilePath) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5886))
// CS Name: ::AudioClipAsyncLoader::<>c*
class CORDL_TYPE __AudioClipAsyncLoader____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__AudioClipAsyncLoader____c* __9;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0))::System::Action_1<::UnityEngine::AudioClip*>* __9__19_0;

  static inline void setStaticF___9(::GlobalNamespace::__AudioClipAsyncLoader____c* value);

  static inline ::GlobalNamespace::__AudioClipAsyncLoader____c* getStaticF___9();

  static inline void setStaticF___9__19_0(::System::Action_1<::UnityEngine::AudioClip*>* value);

  static inline ::System::Action_1<::UnityEngine::AudioClip*>* getStaticF___9__19_0();

  static inline ::GlobalNamespace::__AudioClipAsyncLoader____c* New_ctor();

  /// @brief Method .ctor, addr 0x22fb8e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Unload>b__19_0, addr 0x22fb8f0, size 0x18, virtual false, abstract: false, final false
  inline void _Unload_b__19_0(::UnityEngine::AudioClip* loadedAudioClip);

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipAsyncLoader____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AudioClipAsyncLoader____c(__AudioClipAsyncLoader____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AudioClipAsyncLoader____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AudioClipAsyncLoader____c(__AudioClipAsyncLoader____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClipAsyncLoader____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioClipAsyncLoader____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<Unload>d__21
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3400)), TypeDefinitionIndex(TypeDefinitionIndex(15594)), TypeDefinitionIndex(TypeDefinitionIndex(3394)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 276 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5887)) CS Name: ::AudioClipAsyncLoader::<Unload>d__21
struct CORDL_TYPE __AudioClipAsyncLoader___Unload_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x22fb908, size 0x388, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x22fbc90, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::AudioClipAsyncLoader*", modifiers: "",
  // def_value: None }, CppParam { name: "cacheKey", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onDelete", ty: "::System::Action_1<::UnityEngine::AudioClip*>*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }]
  constexpr __AudioClipAsyncLoader___Unload_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::AudioClipAsyncLoader* __4__this,
                                                  int32_t cacheKey, ::System::Action_1<::UnityEngine::AudioClip*>* onDelete,
                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AudioClipAsyncLoader___Unload_d__21();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* __4__this;

  /// @brief Field cacheKey, offset: 0x30, size: 0x4, def value: None
  int32_t cacheKey;

  /// @brief Field onDelete, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::AudioClip*>* onDelete;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21, cacheKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21, onDelete) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AudioClipAsyncLoader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5888))
// CS Name: ::AudioClipAsyncLoader*
class CORDL_TYPE AudioClipAsyncLoader : public ::System::Object {
public:
  // Declarations
  using _Unload_d__21 = ::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21;

  using __c = ::GlobalNamespace::__AudioClipAsyncLoader____c;

  using __c__DisplayClass17_0 = ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0;

  using __c__DisplayClass16_0 = ::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0;

  using LoadMethodDelegate = ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate;

  /// @brief Field _cache, offset 0x10, size 0x8
  __declspec(property(get = __get__cache, put = __set__cache))::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* _cache;

  /// @brief Field _mediaAsyncLoader, offset 0x18, size 0x8
  __declspec(property(get = __get__mediaAsyncLoader, put = __set__mediaAsyncLoader))::GlobalNamespace::IMediaAsyncLoader* _mediaAsyncLoader;

  constexpr ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>*& __get__cache();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>*> const& __get__cache() const;

  constexpr void __set__cache(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* value);

  constexpr ::GlobalNamespace::IMediaAsyncLoader*& __get__mediaAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMediaAsyncLoader*> const& __get__mediaAsyncLoader() const;

  constexpr void __set__mediaAsyncLoader(::GlobalNamespace::IMediaAsyncLoader* value);

  static inline ::GlobalNamespace::AudioClipAsyncLoader* New_ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* cache,
                                                                  ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader);

  /// @brief Method .ctor, addr 0x22fa314, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* cache,
                    ::GlobalNamespace::IMediaAsyncLoader* mediaAsyncLoader);

  /// @brief Method LoadPreview, addr 0x22fa340, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* LoadPreview(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  /// @brief Method LoadSong, addr 0x22fa68c, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* LoadSong(::GlobalNamespace::IBeatmapLevel* beatmapLevel);

  /// @brief Method UnloadPreview, addr 0x22fa9d8, size 0x1b4, virtual false, abstract: false, final false
  inline void UnloadPreview(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel);

  /// @brief Method UnloadSong, addr 0x22face4, size 0x1b4, virtual false, abstract: false, final false
  inline void UnloadSong(::GlobalNamespace::IBeatmapLevel* beatmapLevel);

  /// @brief Method Load, addr 0x22fa534, size 0xac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source);

  /// @brief Method Load, addr 0x22fa880, size 0xac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::GlobalNamespace::IAssetSongAudioClipProvider* source);

  /// @brief Method Load, addr 0x22fa5e0, size 0xac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source);

  /// @brief Method Load, addr 0x22fa92c, size 0xac, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::GlobalNamespace::IFilePathSongAudioClipProvider* source);

  /// @brief Method Unload, addr 0x22fab8c, size 0xac, virtual false, abstract: false, final false
  inline void Unload(::GlobalNamespace::IAssetSongPreviewAudioClipProvider* source);

  /// @brief Method Unload, addr 0x22fae98, size 0xac, virtual false, abstract: false, final false
  inline void Unload(::GlobalNamespace::IAssetSongAudioClipProvider* source);

  /// @brief Method Unload, addr 0x22fac38, size 0xac, virtual false, abstract: false, final false
  inline void Unload(::GlobalNamespace::IFilePathSongPreviewAudioClipProvider* source);

  /// @brief Method Unload, addr 0x22faf44, size 0xac, virtual false, abstract: false, final false
  inline void Unload(::GlobalNamespace::IFilePathSongAudioClipProvider* source);

  /// @brief Method Load, addr 0x22faff0, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::UnityEngine::AudioClip* audioClip);

  /// @brief Method Load, addr 0x22fb0c8, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(::StringW audioClipFilePath);

  /// @brief Method Load, addr 0x22fb434, size 0x1c4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* Load(int32_t cacheKey, ::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate* loadMethodDelegate);

  /// @brief Method Unload, addr 0x22fb1a0, size 0x10c, virtual false, abstract: false, final false
  inline void Unload(::UnityEngine::AudioClip* audioClip);

  /// @brief Method Unload, addr 0x22fb2ac, size 0xa4, virtual false, abstract: false, final false
  inline void Unload(::StringW audioClipFilePath);

  /// @brief Method Unload, addr 0x22fb620, size 0xac, virtual false, abstract: false, final false
  inline void Unload(int32_t cacheKey, ::System::Action_1<::UnityEngine::AudioClip*>* onDelete);

  /// @brief Method GetCacheKey, addr 0x22fb358, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetCacheKey(::UnityEngine::AudioClip* audioClip);

  /// @brief Method GetCacheKey, addr 0x22fb600, size 0x20, virtual false, abstract: false, final false
  inline int32_t GetCacheKey(::StringW audioClipFilePath);

  /// @brief Method LogError, addr 0x22fb6cc, size 0x58, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AudioClipAsyncLoader(AudioClipAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AudioClipAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AudioClipAsyncLoader(AudioClipAsyncLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioClipAsyncLoader();

public:
  /// @brief Field _cache, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IReferenceCountingCache_2<int32_t, ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>* ____cache;

  /// @brief Field _mediaAsyncLoader, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IMediaAsyncLoader* ____mediaAsyncLoader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioClipAsyncLoader, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader, ____cache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAsyncLoader, ____mediaAsyncLoader) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioClipAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioClipAsyncLoader*, "", "AudioClipAsyncLoader");
NEED_NO_BOX(::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioClipAsyncLoader__LoadMethodDelegate*, "", "AudioClipAsyncLoader/LoadMethodDelegate");
NEED_NO_BOX(::GlobalNamespace::__AudioClipAsyncLoader____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioClipAsyncLoader____c*, "", "AudioClipAsyncLoader/<>c");
NEED_NO_BOX(::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass16_0*, "", "AudioClipAsyncLoader/<>c__DisplayClass16_0");
NEED_NO_BOX(::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioClipAsyncLoader____c__DisplayClass17_0*, "", "AudioClipAsyncLoader/<>c__DisplayClass17_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AudioClipAsyncLoader___Unload_d__21, "", "AudioClipAsyncLoader/<Unload>d__21");
