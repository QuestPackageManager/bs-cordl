#pragma once
// IWYU pragma private; include "MidiParser/MidiFile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MidiFile)
namespace MidiParser {
class MidiFile_Reader;
}
namespace MidiParser {
class MidiTrack;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace MidiParser {
class MidiFile;
}
namespace MidiParser {
class MidiFile_Reader;
}
// Write type traits
MARK_REF_PTR_T(::MidiParser::MidiFile);
MARK_REF_PTR_T(::MidiParser::MidiFile_Reader);
// Dependencies System.Object
namespace MidiParser {
// Is value type: false
// CS Name: MidiParser.MidiFile/Reader
class CORDL_TYPE MidiFile_Reader : public ::System::Object {
public:
  // Declarations
  /// @brief Method Read16, addr 0x3c29954, size 0x54, virtual false, abstract: false, final false
  static inline int32_t Read16(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i);

  /// @brief Method Read32, addr 0x3c298c4, size 0x90, virtual false, abstract: false, final false
  static inline int32_t Read32(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i);

  /// @brief Method Read8, addr 0x3c29ed8, size 0x38, virtual false, abstract: false, final false
  static inline uint8_t Read8(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i);

  /// @brief Method ReadAllBytesFromStream, addr 0x3c29f10, size 0x244, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAllBytesFromStream(::System::IO::Stream* input);

  /// @brief Method ReadString, addr 0x3c2986c, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ReadString(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i, int32_t length);

  /// @brief Method ReadVarInt, addr 0x3c29dd8, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ReadVarInt(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> i);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MidiFile_Reader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MidiFile_Reader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MidiFile_Reader(MidiFile_Reader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MidiFile_Reader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MidiFile_Reader(MidiFile_Reader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19113 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MidiParser::MidiFile_Reader, 0x10>, "Size mismatch!");

} // namespace MidiParser
// Dependencies System.Object
namespace MidiParser {
// Is value type: false
// CS Name: MidiParser.MidiFile
class CORDL_TYPE MidiFile : public ::System::Object {
public:
  // Declarations
  using Reader = ::MidiParser::MidiFile_Reader;

  /// @brief Field format, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_format, put = __cordl_internal_set_format)) int32_t format;

  /// @brief Field ticksPerQuarterNote, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_ticksPerQuarterNote, put = __cordl_internal_set_ticksPerQuarterNote)) int32_t ticksPerQuarterNote;

  /// @brief Field tracks, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_tracks, put = __cordl_internal_set_tracks)) ::ArrayW<::MidiParser::MidiTrack*, ::Array<::MidiParser::MidiTrack*>*> tracks;

  /// @brief Field tracksCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_tracksCount, put = __cordl_internal_set_tracksCount)) int32_t tracksCount;

  static inline ::MidiParser::MidiFile* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::MidiParser::MidiFile* New_ctor(::StringW path);

  /// @brief Method ParseMetaEvent, addr 0x3c29ce8, size 0xf0, virtual false, abstract: false, final false
  static inline bool ParseMetaEvent(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> position, uint8_t metaEventType, ::ByRef<int32_t> data1, ::ByRef<int32_t> data2);

  /// @brief Method ParseTrack, addr 0x3c299a8, size 0x340, virtual false, abstract: false, final false
  static inline ::MidiParser::MidiTrack* ParseTrack(int32_t index, ::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ByRef<int32_t> position);

  constexpr int32_t const& __cordl_internal_get_format() const;

  constexpr int32_t& __cordl_internal_get_format();

  constexpr int32_t const& __cordl_internal_get_ticksPerQuarterNote() const;

  constexpr int32_t& __cordl_internal_get_ticksPerQuarterNote();

  constexpr ::ArrayW<::MidiParser::MidiTrack*, ::Array<::MidiParser::MidiTrack*>*> const& __cordl_internal_get_tracks() const;

  constexpr ::ArrayW<::MidiParser::MidiTrack*, ::Array<::MidiParser::MidiTrack*>*>& __cordl_internal_get_tracks();

  constexpr int32_t const& __cordl_internal_get_tracksCount() const;

  constexpr int32_t& __cordl_internal_get_tracksCount();

  constexpr void __cordl_internal_set_format(int32_t value);

  constexpr void __cordl_internal_set_ticksPerQuarterNote(int32_t value);

  constexpr void __cordl_internal_set_tracks(::ArrayW<::MidiParser::MidiTrack*, ::Array<::MidiParser::MidiTrack*>*> value);

  constexpr void __cordl_internal_set_tracksCount(int32_t value);

  /// @brief Method .ctor, addr 0x3c29554, size 0x318, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x3c29530, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW path);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MidiFile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MidiFile(MidiFile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MidiFile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MidiFile(MidiFile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19114 };

  /// @brief Field format, offset: 0x10, size: 0x4, def value: None
  int32_t ___format;

  /// @brief Field ticksPerQuarterNote, offset: 0x14, size: 0x4, def value: None
  int32_t ___ticksPerQuarterNote;

  /// @brief Field tracks, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::MidiParser::MidiTrack*, ::Array<::MidiParser::MidiTrack*>*> ___tracks;

  /// @brief Field tracksCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___tracksCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MidiParser::MidiFile, ___format) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MidiParser::MidiFile, ___ticksPerQuarterNote) == 0x14, "Offset mismatch!");

static_assert(offsetof(::MidiParser::MidiFile, ___tracks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MidiParser::MidiFile, ___tracksCount) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MidiParser::MidiFile, 0x28>, "Size mismatch!");

} // namespace MidiParser
NEED_NO_BOX(::MidiParser::MidiFile);
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MidiFile*, "MidiParser", "MidiFile");
NEED_NO_BOX(::MidiParser::MidiFile_Reader);
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MidiFile_Reader*, "MidiParser", "MidiFile/Reader");
