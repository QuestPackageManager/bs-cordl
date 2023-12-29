#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MediaAsyncLoader)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class IMediaAsyncLoader;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadWebpage_d__0;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadSpriteAsync_d__3;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadTextureAsync_d__2;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MediaAsyncLoader;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadSpriteAsync_d__3;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadTextureAsync_d__2;
}
namespace GlobalNamespace {
struct __MediaAsyncLoader___LoadWebpage_d__0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MediaAsyncLoader);
MARK_VAL_T(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1);
MARK_VAL_T(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3);
MARK_VAL_T(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2);
MARK_VAL_T(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0);
// Type: ::<LoadWebpage>d__0
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3397)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 393 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5990)) CS Name: ::MediaAsyncLoader::<LoadWebpage>d__0
struct CORDL_TYPE __MediaAsyncLoader___LoadWebpage_d__0 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21b3ee0 size 0x43c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21b431c size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*",
  // modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MediaAsyncLoader___LoadWebpage_d__0(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::StringW uri,
                                                  ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest* _www_5__2,
                                                  ::UnityEngine::AsyncOperation* _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MediaAsyncLoader___LoadWebpage_d__0();

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

  /// @brief Field <request>5__3, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* _request_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, uri) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, _www_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, _request_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadAudioClipFromFilePathAsync>d__1
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(15614)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 280 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(5991)) CS Name:
// ::MediaAsyncLoader::<LoadAudioClipFromFilePathAsync>d__1
struct CORDL_TYPE __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21b4374 size 0x47c virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21b47f0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty:
  // "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> __t__builder,
                                                                     ::StringW filePath, ::UnityEngine::Networking::UnityWebRequest* _www_5__2, ::UnityEngine::AsyncOperation* _request_5__3,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> __t__builder;

  /// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
  ::StringW filePath;

  /// @brief Field <www>5__2, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _www_5__2;

  /// @brief Field <request>5__3, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* _request_5__3;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, _www_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, _request_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadTextureAsync>d__2
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3388)), TypeDefinitionIndex(TypeDefinitionIndex(10001)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 398
// }), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3397))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5992)) CS Name:
// ::MediaAsyncLoader::<LoadTextureAsync>d__2
struct CORDL_TYPE __MediaAsyncLoader___LoadTextureAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21b4848 size 0x434 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21b4c7c size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty:
  // "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MediaAsyncLoader___LoadTextureAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*> __t__builder, ::StringW path,
                                                       ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest* _www_5__2,
                                                       ::UnityEngine::AsyncOperation* _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MediaAsyncLoader___LoadTextureAsync_d__2();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*> __t__builder;

  /// @brief Field path, offset: 0x20, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <www>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _www_5__2;

  /// @brief Field <request>5__3, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* _request_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, _www_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, _request_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadSpriteAsync>d__3
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 765 }), TypeDefinitionIndex(TypeDefinitionIndex(10213)),
// TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(2675)), TypeDefinitionIndex(TypeDefinitionIndex(3388))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5993))
// CS Name: ::MediaAsyncLoader::<LoadSpriteAsync>d__3
struct CORDL_TYPE __MediaAsyncLoader___LoadSpriteAsync_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x21b4cd4 size 0x5ec virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x21b52c0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None
  // }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_www_5__2", ty:
  // "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __MediaAsyncLoader___LoadSpriteAsync_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder, ::StringW path,
                                                      ::System::Threading::CancellationToken cancellationToken, ::UnityEngine::Networking::UnityWebRequest* _www_5__2,
                                                      ::UnityEngine::AsyncOperation* _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MediaAsyncLoader___LoadSpriteAsync_d__3();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder;

  /// @brief Field path, offset: 0x20, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <www>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* _www_5__2;

  /// @brief Field <request>5__3, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AsyncOperation* _request_5__3;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, _www_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, _request_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MediaAsyncLoader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5994))
// CS Name: ::MediaAsyncLoader*
class CORDL_TYPE MediaAsyncLoader : public ::System::Object {
public:
  // Declarations
  using _LoadSpriteAsync_d__3 = ::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3;

  using _LoadTextureAsync_d__2 = ::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2;

  using _LoadAudioClipFromFilePathAsync_d__1 = ::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1;

  using _LoadWebpage_d__0 = ::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0;

  /// @brief Convert operator to "::GlobalNamespace::IMediaAsyncLoader"
  constexpr operator ::GlobalNamespace::IMediaAsyncLoader*() noexcept;

  /// @brief Method LoadWebpage addr 0x21b3a9c size 0xfc virtual false final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* LoadWebpage(::StringW uri, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadAudioClipFromFilePathAsync addr 0x21b3b98 size 0xf0 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* LoadAudioClipFromFilePathAsync(::StringW filePath);

  /// @brief Method LoadTextureAsync addr 0x21b3c88 size 0xfc virtual false final false
  static inline ::System::Threading::Tasks::Task_1<::UnityEngine::Texture2D*>* LoadTextureAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadSpriteAsync addr 0x21b3d84 size 0xfc virtual false final false
  static inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* LoadSpriteAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Log addr 0x21b3e80 size 0x58 virtual false final false
  static inline void Log(::StringW message);

  static inline ::GlobalNamespace::MediaAsyncLoader* New_ctor();

  /// @brief Method .ctor addr 0x21b3ed8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MediaAsyncLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MediaAsyncLoader(MediaAsyncLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MediaAsyncLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MediaAsyncLoader(MediaAsyncLoader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MediaAsyncLoader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MediaAsyncLoader, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MediaAsyncLoader*, "", "MediaAsyncLoader");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1, "", "MediaAsyncLoader/<LoadAudioClipFromFilePathAsync>d__1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3, "", "MediaAsyncLoader/<LoadSpriteAsync>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2, "", "MediaAsyncLoader/<LoadTextureAsync>d__2");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0, "", "MediaAsyncLoader/<LoadWebpage>d__0");
