#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelDataUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataUtils)
namespace GlobalNamespace {
struct BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8;
}
namespace GlobalNamespace {
class BeatmapLevelDataUtils___c__DisplayClass7_0;
}
namespace GlobalNamespace {
class BeatmapLevelDataUtils___c__DisplayClass8_0;
}
namespace GlobalNamespace {
class BeatmapLevelDataUtils___c__DisplayClass9_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
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
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataUtils;
}
namespace GlobalNamespace {
class BeatmapLevelDataUtils___c__DisplayClass7_0;
}
namespace GlobalNamespace {
class BeatmapLevelDataUtils___c__DisplayClass8_0;
}
namespace GlobalNamespace {
class BeatmapLevelDataUtils___c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataUtils);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass7_0);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0);
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataUtils/<>c__DisplayClass7_0
class CORDL_TYPE BeatmapLevelDataUtils___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field path, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_path, put = __cordl_internal_set_path)) ::StringW path;

  static inline ::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass7_0* New_ctor();

  /// @brief Method <ReadAllTextFromPathAsync>b__0, addr 0x26c5f14, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _ReadAllTextFromPathAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr void __cordl_internal_set_path(::StringW value);

  /// @brief Method .ctor, addr 0x26c5330, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataUtils___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataUtils___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataUtils___c__DisplayClass7_0(BeatmapLevelDataUtils___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataUtils___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataUtils___c__DisplayClass7_0(BeatmapLevelDataUtils___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12950 };

  /// @brief Field path, offset: 0x10, size: 0x8, def value: None
  ::StringW ___path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass7_0, ___path) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataUtils/<>c__DisplayClass8_0
class CORDL_TYPE BeatmapLevelDataUtils___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field www, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_www, put = __cordl_internal_set_www)) ::UnityEngine::Networking::UnityWebRequest* www;

  static inline ::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0* New_ctor();

  /// @brief Method <ReadAllTextFromUrlAsync>b__0, addr 0x26c5f74, size 0x80, virtual false, abstract: false, final false
  inline ::StringW _ReadAllTextFromUrlAsync_b__0();

  constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_www() const;

  constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_www();

  constexpr void __cordl_internal_set_www(::UnityEngine::Networking::UnityWebRequest* value);

  /// @brief Method .ctor, addr 0x26c5f6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataUtils___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataUtils___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataUtils___c__DisplayClass8_0(BeatmapLevelDataUtils___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataUtils___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataUtils___c__DisplayClass8_0(BeatmapLevelDataUtils___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12951 };

  /// @brief Field www, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Networking::UnityWebRequest* ___www;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0, ___www) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, Unity.Collections.NativeArray`1::ReadOnly<T>
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataUtils/<>c__DisplayClass9_0
class CORDL_TYPE BeatmapLevelDataUtils___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field inputData, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_inputData, put = __cordl_internal_set_inputData)) ::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> inputData;

  static inline ::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass9_0* New_ctor();

  /// @brief Method <ReadAllTextFromDataAsync>b__0, addr 0x26c5ff4, size 0x5c, virtual false, abstract: false, final false
  inline ::StringW _ReadAllTextFromDataAsync_b__0();

  constexpr ::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> const& __cordl_internal_get_inputData() const;

  constexpr ::Unity::Collections::NativeArray_1_ReadOnly<uint8_t>& __cordl_internal_get_inputData();

  constexpr void __cordl_internal_set_inputData(::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> value);

  /// @brief Method .ctor, addr 0x26c5428, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataUtils___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataUtils___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataUtils___c__DisplayClass9_0(BeatmapLevelDataUtils___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataUtils___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataUtils___c__DisplayClass9_0(BeatmapLevelDataUtils___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12952 };

  /// @brief Field inputData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> ___inputData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass9_0, ___inputData) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>,
// System.Threading.CancellationToken, UnityEngine.Networking.UnityWebRequest::Result
namespace GlobalNamespace {
// Is value type: true
// CS Name: BeatmapLevelDataUtils/<ReadAllTextFromUrlAsync>d__8
struct CORDL_TYPE BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x26c6050, size 0x494, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x26c64e4, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam
  // { name: "__8__1", ty: "::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0*", modifiers: "", def_value: None }, CppParam { name: "cancellationToken", ty:
  // "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None }]
  constexpr BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::StringW path,
                                                                ::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0* __8__1, ::System::Threading::CancellationToken cancellationToken,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12953 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field path, offset: 0x20, size: 0x8, def value: None
  ::StringW path;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0* __8__1;

  /// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
  ::System::Threading::CancellationToken cancellationToken;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest_Result> __u__1;

  /// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8, path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8, __u__2) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevelDataUtils
class CORDL_TYPE BeatmapLevelDataUtils : public ::System::Object {
public:
  // Declarations
  using _ReadAllTextFromUrlAsync_d__8 = ::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8;

  using __c__DisplayClass7_0 = ::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass9_0;

  /// @brief Field kUtf8Bom, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kUtf8Bom, put = setStaticF_kUtf8Bom)) ::ArrayW<uint8_t, ::Array<uint8_t>*> kUtf8Bom;

  /// @brief Field kUtf8Encoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kUtf8Encoding, put = setStaticF_kUtf8Encoding)) ::System::Text::UTF8Encoding* kUtf8Encoding;

  /// @brief Field sha1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sha1, put = setStaticF_sha1)) ::System::Security::Cryptography::SHA1* sha1;

  /// @brief Method CalculateAudioContentHash, addr 0x26c554c, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW CalculateAudioContentHash(::UnityEngine::AudioClip* audioClip);

  /// @brief Method CalculateBeatmapDataContentHash, addr 0x26c5430, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW CalculateBeatmapDataContentHash(::StringW beatmapJson);

  /// @brief Method CalculateHashFromData, addr 0x26c54a8, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW CalculateHashFromData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method CalculateHashFromPath, addr 0x26c5658, size 0x1fc, virtual false, abstract: false, final false
  static inline ::StringW CalculateHashFromPath(::StringW path);

  /// @brief Method Compress, addr 0x26c5854, size 0x47c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compress(::StringW data);

  /// @brief Method Decompress, addr 0x26c4cd4, size 0x448, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decompress(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetBytesFromUtf8String, addr 0x26c5cd0, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytesFromUtf8String(::StringW data);

  /// @brief Method GetUtf8String, addr 0x26c511c, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW GetUtf8String(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method IsCompressed, addr 0x26c4c94, size 0x40, virtual false, abstract: false, final false
  static inline bool IsCompressed(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method ReadAllTextFromData, addr 0x26c4160, size 0x168, virtual false, abstract: false, final false
  static inline ::StringW ReadAllTextFromData(::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> inputData);

  /// @brief Method ReadAllTextFromDataAsync, addr 0x26c3af8, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAllTextFromDataAsync(::Unity::Collections::NativeArray_1_ReadOnly<uint8_t> inputData);

  /// @brief Method ReadAllTextFromPath, addr 0x26c4b48, size 0x14c, virtual false, abstract: false, final false
  static inline ::StringW ReadAllTextFromPath(::StringW path);

  /// @brief Method ReadAllTextFromPathAsync, addr 0x26c51ec, size 0x144, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAllTextFromPathAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method ReadAllTextFromUrlAsync, addr 0x26c5338, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAllTextFromUrlAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method StartsWithBom, addr 0x26c5d44, size 0x120, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12954 };

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
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass7_0*, "", "BeatmapLevelDataUtils/<>c__DisplayClass7_0");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass8_0*, "", "BeatmapLevelDataUtils/<>c__DisplayClass8_0");
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataUtils___c__DisplayClass9_0*, "", "BeatmapLevelDataUtils/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataUtils__ReadAllTextFromUrlAsync_d__8, "", "BeatmapLevelDataUtils/<ReadAllTextFromUrlAsync>d__8");
