#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevelDataUtils)
namespace GlobalNamespace {
class __BeatmapLevelDataUtils____c__DisplayClass7_0;
}
namespace GlobalNamespace {
class __BeatmapLevelDataUtils____c__DisplayClass8_0;
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
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
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
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataUtils);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass7_0);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0);
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

  /// @brief Method <ReadJsonStringFromPathAsync>b__0, addr 0x12c7dd8, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _ReadJsonStringFromPathAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_path() const;

  constexpr ::StringW& __cordl_internal_get_path();

  constexpr void __cordl_internal_set_path(::StringW value);

  /// @brief Method .ctor, addr 0x12c7358, size 0x8, virtual false, abstract: false, final false
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
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataUtils::<>c__DisplayClass8_0*
class CORDL_TYPE __BeatmapLevelDataUtils____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field filename, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_filename, put = __cordl_internal_set_filename))::StringW filename;

  /// @brief Field inputData, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_inputData, put = __cordl_internal_set_inputData))::Unity::Collections::NativeArray_1<uint8_t> inputData;

  static inline ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0* New_ctor();

  /// @brief Method <ReadJsonStringFromDataAsync>b__0, addr 0x12c7e30, size 0x64, virtual false, abstract: false, final false
  inline ::StringW _ReadJsonStringFromDataAsync_b__0();

  constexpr ::StringW const& __cordl_internal_get_filename() const;

  constexpr ::StringW& __cordl_internal_get_filename();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_inputData() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_inputData();

  constexpr void __cordl_internal_set_filename(::StringW value);

  constexpr void __cordl_internal_set_inputData(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method .ctor, addr 0x12c7360, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field inputData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___inputData;

  /// @brief Field filename, offset: 0x20, size: 0x8, def value: None
  ::StringW ___filename;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0, ___inputData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0, ___filename) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BeatmapLevelDataUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapLevelDataUtils*
class CORDL_TYPE BeatmapLevelDataUtils : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::__BeatmapLevelDataUtils____c__DisplayClass8_0;

  /// @brief Field kUtf8Bom, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kUtf8Bom, put = setStaticF_kUtf8Bom))::ArrayW<uint8_t, ::Array<uint8_t>*> kUtf8Bom;

  /// @brief Field kUtf8Encoding, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kUtf8Encoding, put = setStaticF_kUtf8Encoding))::System::Text::UTF8Encoding* kUtf8Encoding;

  /// @brief Field sha1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_sha1, put = setStaticF_sha1))::System::Security::Cryptography::SHA1* sha1;

  /// @brief Method CalculateAndInjectContentChecksumIntoBeatmapJson, addr 0x12c7368, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW CalculateAndInjectContentChecksumIntoBeatmapJson(::StringW beatmapJson);

  /// @brief Method CalculateAudioContentHash, addr 0x12c7540, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW CalculateAudioContentHash(::UnityEngine::AudioClip* audioClip);

  /// @brief Method CalculateBeatmapDataContentHash, addr 0x12c73c8, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW CalculateBeatmapDataContentHash(::StringW beatmapJson);

  /// @brief Method CalculateHashFromData, addr 0x12c749c, size 0xa4, virtual false, abstract: false, final false
  static inline ::StringW CalculateHashFromData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method CalculateHashFromPath, addr 0x12c764c, size 0x200, virtual false, abstract: false, final false
  static inline ::StringW CalculateHashFromPath(::StringW path);

  /// @brief Method Compress, addr 0x12c784c, size 0x464, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Compress(::StringW data);

  /// @brief Method Decompress, addr 0x12c6e38, size 0x430, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decompress(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Decompress, addr 0x12c68a8, size 0x434, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decompress(::StringW path);

  /// @brief Method GetBytesFromUtf8String, addr 0x12c7cb0, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytesFromUtf8String(::StringW data);

  /// @brief Method GetUtf8String, addr 0x12c6cdc, size 0x15c, virtual false, abstract: false, final false
  static inline ::StringW GetUtf8String(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method InjectContentChecksumIntoBeatmapJson, addr 0x12c7440, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW InjectContentChecksumIntoBeatmapJson(::StringW beatmapJson, ::StringW checksum);

  /// @brief Method IsCompressed, addr 0x12c6854, size 0x54, virtual false, abstract: false, final false
  static inline bool IsCompressed(::StringW path);

  /// @brief Method ReadJsonStringFromData, addr 0x12c615c, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW ReadJsonStringFromData(::Unity::Collections::NativeArray_1<uint8_t> inputData, ::StringW filename);

  /// @brief Method ReadJsonStringFromDataAsync, addr 0x12bb0bc, size 0xfc, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadJsonStringFromDataAsync(::Unity::Collections::NativeArray_1<uint8_t> inputData, ::StringW filename);

  /// @brief Method ReadJsonStringFromPath, addr 0x12c67b8, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW ReadJsonStringFromPath(::StringW path);

  /// @brief Method ReadJsonStringFromPathAsync, addr 0x12c7268, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::StringW>* ReadJsonStringFromPathAsync(::StringW path);

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

  /// @brief Field kCompressedPathPart offset 0xffffffff size 0x8
  static constexpr ::ConstString kCompressedPathPart{ u".gz" };

  /// @brief Field kContentChecksumToken offset 0xffffffff size 0x8
  static constexpr ::ConstString kContentChecksumToken{ u"<CONTENT_HASH>" };

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
