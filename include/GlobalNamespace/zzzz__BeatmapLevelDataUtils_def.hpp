#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelDataUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataUtils)
namespace GlobalNamespace {
struct __BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8;
}
namespace GlobalNamespace {
class __BeatmapLevelDataUtils____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataUtils____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataUtils____c__DisplayClass9_0;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Security::Cryptography {
class SHA1;
}
namespace System::Text {
class UTF8Encoding;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Unity::Collections {
template <typename T> struct __NativeArray_1__ReadOnly;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Networking {
struct __UnityWebRequest__Result;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataUtils;
}
namespace GlobalNamespace {
class __BeatmapLevelDataUtils____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataUtils____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataUtils____c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct __BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataUtils);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass7_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataUtils::<>c__DisplayClass7_0*
class CORDL_TYPE __BeatmapLevelDataUtils____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field path, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path))::StringW path;

  static inline ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass7_0* New_ctor();

  /// @brief Method <ReadAllTextFromPathAsync>b__0, addr 0x14c2c74, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _ReadAllTextFromPathAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr void __cordl_internal_set_path(::StringW value);

  /// @brief Method .ctor, addr 0x14c20a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataUtils____c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataUtils____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataUtils____c__DisplayClass7_0(__BeatmapLevelDataUtils____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataUtils____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataUtils____c__DisplayClass7_0(__BeatmapLevelDataUtils____c__DisplayClass7_0 const&) = delete;

  /// @brief Field path, offset: 0x10, size: 0x8, def value: None
  ::StringW ___path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass7_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass7_0, ___path) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataUtils::<>c__DisplayClass8_0*
class CORDL_TYPE __BeatmapLevelDataUtils____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field www, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_www, put = __cordl_internal_set_www))::UnityEngine::Networking::UnityWebRequest* www;

  static inline ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0* New_ctor();

  /// @brief Method <ReadAllTextFromUrlAsync>b__0, addr 0x14c2cd4, size 0x80, virtual false, abstract: false, final false
  inline ::StringW _ReadAllTextFromUrlAsync_b__0();

  constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_www();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Networking::UnityWebRequest*> const& __cordl_internal_get_www() const;

  constexpr void __cordl_internal_set_www(::UnityEngine::Networking::UnityWebRequest* value);

  /// @brief Method .ctor, addr 0x14c2ccc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataUtils____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataUtils____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataUtils____c__DisplayClass8_0(__BeatmapLevelDataUtils____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataUtils____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataUtils____c__DisplayClass8_0(__BeatmapLevelDataUtils____c__DisplayClass8_0 const&) = delete;

  /// @brief Field www, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* ___www;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0, ___www) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ReadAllTextFromUrlAsync>d__8
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BeatmapLevelDataUtils::<ReadAllTextFromUrlAsync>d__8
struct CORDL_TYPE __BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14c2d54, size 0x438, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14c318c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "__8__1", ty: "::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr __BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::StringW path,
                                                                   ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0* __8__1, ::System::Threading::CancellationToken cancellationToken,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result> __u__1,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field path, offset: 0x20, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0* __8__1;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::__UnityWebRequest__Result> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8, __u__2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass9_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataUtils::<>c__DisplayClass9_0*
class CORDL_TYPE __BeatmapLevelDataUtils____c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field inputData, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_inputData, put = __cordl_internal_set_inputData))::Unity::Collections::__NativeArray_1__ReadOnly<uint8_t> inputData;

  static inline ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass9_0* New_ctor();

  /// @brief Method <ReadAllTextFromDataAsync>b__0, addr 0x14c31e4, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW _ReadAllTextFromDataAsync_b__0();

  constexpr ::Unity::Collections::__NativeArray_1__ReadOnly<uint8_t> const& __cordl_internal_get_inputData() const;

  constexpr ::Unity::Collections::__NativeArray_1__ReadOnly<uint8_t>& __cordl_internal_get_inputData();

  constexpr void __cordl_internal_set_inputData(::Unity::Collections::__NativeArray_1__ReadOnly<uint8_t> value);

  /// @brief Method .ctor, addr 0x14c21a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BeatmapLevelDataUtils____c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataUtils____c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BeatmapLevelDataUtils____c__DisplayClass9_0(__BeatmapLevelDataUtils____c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BeatmapLevelDataUtils____c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BeatmapLevelDataUtils____c__DisplayClass9_0(__BeatmapLevelDataUtils____c__DisplayClass9_0 const&) = delete;

  /// @brief Field inputData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::__NativeArray_1__ReadOnly<uint8_t> ___inputData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass9_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass9_0, ___inputData) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelDataUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataUtils*
class CORDL_TYPE BeatmapLevelDataUtils : public ::System::Object {
public:
  // Declarations
  using _ReadAllTextFromUrlAsync_d__8 = ::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8;

  using __c__DisplayClass7_0 = ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass9_0;

  /// @brief Field kUtf8Bom, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kUtf8Bom, put = setStaticF_kUtf8Bom))::ArrayW<uint8_t, ::Array<uint8_t>*> kUtf8Bom;

  /// @brief Field kUtf8Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kUtf8Encoding, put = setStaticF_kUtf8Encoding))::System::Text::UTF8Encoding* kUtf8Encoding;

  /// @brief Field sha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sha1, put = setStaticF_sha1))::System::Security::Cryptography::SHA1* sha1;

  /// @brief Method CalculateAudioContentHash, addr 0x14c22c8, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW CalculateAudioContentHash(::UnityEngine::AudioClip* audioClip);

  /// @brief Method CalculateBeatmapDataContentHash, addr 0x14c21ac, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW CalculateBeatmapDataContentHash(::StringW beatmapJson);

  /// @brief Method CalculateHashFromData, addr 0x14c2224, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW CalculateHashFromData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method CalculateHashFromPath, addr 0x14c23d4, size 0x200, virtual false, abstract: false, final false
  static inline ::StringW CalculateHashFromPath(::StringW path);

  /// @brief Method Compress, addr 0x14c25d4, size 0x464, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compress(::StringW data);

  /// @brief Method Decompress, addr 0x14c1a58, size 0x430, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decompress(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetBytesFromUtf8String, addr 0x14c2a38, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytesFromUtf8String(::StringW data);

  /// @brief Method GetUtf8String, addr 0x14c1e88, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW GetUtf8String(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method IsCompressed, addr 0x14c1a18, size 0x40, virtual false, abstract: false, final false
  static inline bool IsCompressed(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ReadAllTextFromData, addr 0x14c0f28, size 0x168, virtual false, abstract: false, final false
  static inline ::StringW ReadAllTextFromData(::Unity::Collections::__NativeArray_1__ReadOnly<uint8_t> inputData);

  /// @brief Method ReadAllTextFromDataAsync, addr 0x14b5258, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAllTextFromDataAsync(::Unity::Collections::__NativeArray_1__ReadOnly<uint8_t> inputData);

  /// @brief Method ReadAllTextFromPath, addr 0x14c18cc, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW ReadAllTextFromPath(::StringW path);

  /// @brief Method ReadAllTextFromPathAsync, addr 0x14c1f58, size 0x148, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAllTextFromPathAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAllTextFromUrlAsync, addr 0x14c20a8, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAllTextFromUrlAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method StartsWithBom, addr 0x14c2aac, size 0x114, virtual false, abstract: false, final false
  static inline bool StartsWithBom(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_kUtf8Bom();

  static inline ::System::Text::UTF8Encoding* getStaticF_kUtf8Encoding();

  static inline ::System::Security::Cryptography::SHA1* getStaticF_sha1();

  static inline void setStaticF_kUtf8Bom(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_kUtf8Encoding(::System::Text::UTF8Encoding* value);

  static inline void setStaticF_sha1(::System::Security::Cryptography::SHA1* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataUtils(BeatmapLevelDataUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataUtils(BeatmapLevelDataUtils const&) = delete;

  /// @brief Field gzipByte0 offset 0xffffffff size 0x1
  static constexpr uint8_t gzipByte0{ static_cast<uint8_t>(0x1fu) };

  /// @brief Field gzipByte1 offset 0xffffffff size 0x1
  static constexpr uint8_t gzipByte1{ static_cast<uint8_t>(0x8bu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataUtils, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataUtils*, "", "BeatmapLevelDataUtils");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass7_0*, "", "BeatmapLevelDataUtils/<>c__DisplayClass7_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0*, "", "BeatmapLevelDataUtils/<>c__DisplayClass8_0");
NEED_NO_BOX(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass9_0*, "", "BeatmapLevelDataUtils/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapLevelDataUtils___ReadAllTextFromUrlAsync_d__8, "", "BeatmapLevelDataUtils/<ReadAllTextFromUrlAsync>d__8");
