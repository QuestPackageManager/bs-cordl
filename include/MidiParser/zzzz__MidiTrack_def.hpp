#pragma once
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
// Type: MidiParser::MidiTrack
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MidiParser {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16229))
// CS Name: ::MidiParser::MidiTrack*
class CORDL_TYPE MidiTrack : public ::System::Object {
public:
  // Declarations
  /// @brief Field Index, offset 0x10, size 0x4
  __declspec(property(get = __get_Index, put = __set_Index)) int32_t Index;

  /// @brief Field MidiEvents, offset 0x18, size 0x8
  __declspec(property(get = __get_MidiEvents, put = __set_MidiEvents))::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* MidiEvents;

  constexpr int32_t& __get_Index();

  constexpr int32_t const& __get_Index() const;

  constexpr void __set_Index(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*& __get_MidiEvents();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::MidiParser::MidiEvent>*> const& __get_MidiEvents() const;

  constexpr void __set_MidiEvents(::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* value);

  static inline ::MidiParser::MidiTrack* New_ctor();

  /// @brief Method .ctor, addr 0x23e6444, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MidiTrack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MidiTrack(MidiTrack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MidiTrack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MidiTrack(MidiTrack const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MidiTrack();

public:
  /// @brief Field Index, offset: 0x10, size: 0x4, def value: None
  int32_t ___Index;

  /// @brief Field MidiEvents, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::MidiParser::MidiEvent>* ___MidiEvents;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MidiParser::MidiTrack, 0x20>, "Size mismatch!");

static_assert(offsetof(::MidiParser::MidiTrack, ___Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MidiParser::MidiTrack, ___MidiEvents) == 0x18, "Offset mismatch!");

} // namespace MidiParser
NEED_NO_BOX(::MidiParser::MidiTrack);
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MidiTrack*, "MidiParser", "MidiTrack");
