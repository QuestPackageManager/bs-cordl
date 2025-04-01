#pragma once
// IWYU pragma private; include "MidiParser/MidiTrack.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MidiTrack)
namespace MidiParser {
struct MidiEvent;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace MidiParser {
class MidiTrack;
}
// Write type traits
MARK_REF_PTR_T(::MidiParser::MidiTrack);
// Dependencies System.Object
namespace MidiParser {
// Is value type: false
// CS Name: MidiParser.MidiTrack
class CORDL_TYPE MidiTrack : public ::System::Object {
public:
  // Declarations
  /// @brief Field Index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Index, put = __cordl_internal_set_Index)) int32_t Index;

  /// @brief Field MidiEvents, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_MidiEvents, put = __cordl_internal_set_MidiEvents)) ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* MidiEvents;

  static inline ::MidiParser::MidiTrack* New_ctor();

  constexpr int32_t const& __cordl_internal_get_Index() const;

  constexpr int32_t& __cordl_internal_get_Index();

  constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* const& __cordl_internal_get_MidiEvents() const;

  constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*& __cordl_internal_get_MidiEvents();

  constexpr void __cordl_internal_set_Index(int32_t value);

  constexpr void __cordl_internal_set_MidiEvents(::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* value);

  /// @brief Method .ctor, addr 0x3c24ee8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MidiTrack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MidiTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MidiTrack(MidiTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MidiTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MidiTrack(MidiTrack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19111 };

  /// @brief Field Index, offset: 0x10, size: 0x4, def value: None
  int32_t ___Index;

  /// @brief Field MidiEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* ___MidiEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MidiParser::MidiTrack, ___Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MidiParser::MidiTrack, ___MidiEvents) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::MidiParser::MidiTrack, 0x20>, "Size mismatch!");

} // namespace MidiParser
NEED_NO_BOX(::MidiParser::MidiTrack);
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MidiTrack*, "MidiParser", "MidiTrack");
