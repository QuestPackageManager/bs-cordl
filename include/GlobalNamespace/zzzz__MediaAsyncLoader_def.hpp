#pragma once
// IWYU pragma private; include "GlobalNamespace/MediaAsyncLoader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MediaAsyncLoader)
namespace GlobalNamespace {
class IMediaAsyncLoader;
}
namespace GlobalNamespace {
struct MediaAsyncLoader__LoadAudioClipAsync_d__2;
}
namespace GlobalNamespace {
struct MediaAsyncLoader__LoadSpriteAsync_d__4;
}
namespace GlobalNamespace {
struct MediaAsyncLoader__LoadTextureAsync_d__3;
}
namespace GlobalNamespace {
struct MediaAsyncLoader__LoadWebpage_d__0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class MediaAsyncLoader;
}
namespace GlobalNamespace {
struct MediaAsyncLoader__LoadAudioClipAsync_d__2;
}
namespace GlobalNamespace {
struct MediaAsyncLoader__LoadSpriteAsync_d__4;
}
namespace GlobalNamespace {
struct MediaAsyncLoader__LoadTextureAsync_d__3;
}
namespace GlobalNamespace {
struct MediaAsyncLoader__LoadWebpage_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MediaAsyncLoader);
MARK_VAL_T(::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2);
MARK_VAL_T(::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4);
MARK_VAL_T(::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3);
MARK_VAL_T(::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, UnityEngine.Networking.UnityWebRequest::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: MediaAsyncLoader/<LoadAudioClipAsync>d__2
struct CORDL_TYPE MediaAsyncLoader__LoadAudioClipAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x587b57c, size 0x474, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x587b9f0, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MediaAsyncLoader__LoadAudioClipAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::AudioClip>>", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "streamAudio", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>", modifiers: "", def_value: None }]
  constexpr MediaAsyncLoader__LoadAudioClipAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::AudioClip>> __t__builder,
                                                      ::StringW filePath, bool streamAudio, ::UnityEngine::Networking::UnityWebRequest* _www_5__2,
                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22510 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::AudioClip>> __t__builder;

  /// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
  ::StringW filePath;

  /// @brief Field streamAudio, offset: 0x28, size: 0x1, def value: None
  bool streamAudio;

  /// @brief Field <www>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _www_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2, filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2, streamAudio) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2, _www_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken,
// UnityEngine.Networking.UnityWebRequest::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: MediaAsyncLoader/<LoadSpriteAsync>d__4
struct CORDL_TYPE MediaAsyncLoader__LoadSpriteAsync_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x587ba70, size 0x5a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x587c010, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MediaAsyncLoader__LoadSpriteAsync_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Sprite>>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty:
  // "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>", modifiers: "", def_value: None }]
  constexpr MediaAsyncLoader__LoadSpriteAsync_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Sprite>> __t__builder, ::StringW path,
                                                   ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest* _www_5__2,
                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22511 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Sprite>> __t__builder;

  /// @brief Field path, offset: 0x20, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <www>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _www_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4, _www_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken,
// UnityEngine.Networking.UnityWebRequest::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: MediaAsyncLoader/<LoadTextureAsync>d__3
struct CORDL_TYPE MediaAsyncLoader__LoadTextureAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x587c090, size 0x3f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x587c484, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MediaAsyncLoader__LoadTextureAsync_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty:
  // "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>", modifiers: "", def_value: None }]
  constexpr MediaAsyncLoader__LoadTextureAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Texture2D>> __t__builder, ::StringW path,
                                                    ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest* _www_5__2,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22512 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Texture2D>> __t__builder;

  /// @brief Field path, offset: 0x20, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <www>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _www_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3, _www_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken,
// UnityEngine.Networking.UnityWebRequest::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: MediaAsyncLoader/<LoadWebpage>d__0
struct CORDL_TYPE MediaAsyncLoader__LoadWebpage_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x587c504, size 0x408, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x587c90c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MediaAsyncLoader__LoadWebpage_d__0();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>", modifiers: "", def_value:
  // None }]
  constexpr MediaAsyncLoader__LoadWebpage_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::StringW uri,
                                               ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest* _www_5__2,
                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22513 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field uri, offset: 0x20, size: 0x8, def value: None
  ::StringW uri;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <www>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _www_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0, uri) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0, _www_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MediaAsyncLoader
class CORDL_TYPE MediaAsyncLoader : public ::System::Object {
public:
  // Declarations
  using _LoadAudioClipAsync_d__2 = ::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2;

  using _LoadSpriteAsync_d__4 = ::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4;

  using _LoadTextureAsync_d__3 = ::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3;

  using _LoadWebpage_d__0 = ::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0;

  /// @brief Convert operator to "::GlobalNamespace::IMediaAsyncLoader"
  constexpr operator ::GlobalNamespace::IMediaAsyncLoader*() noexcept;

  /// @brief Method LoadAudioClipAsync, addr 0x587b258, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* LoadAudioClipAsync(::StringW filePath, bool streamAudio);

  /// @brief Method LoadAudioClipFromFilePathAsync, addr 0x587b24c, size 0xc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* LoadAudioClipFromFilePathAsync(::StringW filePath);

  /// @brief Method LoadSpriteAsync, addr 0x587b434, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* LoadSpriteAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadTextureAsync, addr 0x587b348, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* LoadTextureAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadWebpage, addr 0x587b160, size 0xec, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* LoadWebpage(::StringW uri, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Log, addr 0x587b520, size 0x5c, virtual false, abstract: false, final false
  static inline void Log(::StringW message);

  static inline ::GlobalNamespace::MediaAsyncLoader* New_ctor();

  /// @brief Method .ctor, addr 0x5879a84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IMediaAsyncLoader"
  constexpr ::GlobalNamespace::IMediaAsyncLoader* i___GlobalNamespace__IMediaAsyncLoader() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MediaAsyncLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MediaAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MediaAsyncLoader(MediaAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MediaAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MediaAsyncLoader(MediaAsyncLoader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22514 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MediaAsyncLoader, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaAsyncLoader*, "", "MediaAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaAsyncLoader__LoadAudioClipAsync_d__2, "", "MediaAsyncLoader/<LoadAudioClipAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaAsyncLoader__LoadSpriteAsync_d__4, "", "MediaAsyncLoader/<LoadSpriteAsync>d__4");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaAsyncLoader__LoadTextureAsync_d__3, "", "MediaAsyncLoader/<LoadTextureAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaAsyncLoader__LoadWebpage_d__0, "", "MediaAsyncLoader/<LoadWebpage>d__0");
