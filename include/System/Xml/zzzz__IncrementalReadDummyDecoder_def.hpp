#pragma once
// IWYU pragma private; include "System/Xml/IncrementalReadDummyDecoder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__IncrementalReadDecoder_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementalReadDummyDecoder)
// Forward declare root types
namespace System::Xml {
class IncrementalReadDummyDecoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IncrementalReadDummyDecoder);
// Dependencies System.Xml.IncrementalReadDecoder
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IncrementalReadDummyDecoder
class CORDL_TYPE IncrementalReadDummyDecoder : public ::System::Xml::IncrementalReadDecoder {
public:
  // Declarations
  __declspec(property(get = get_IsFull)) bool IsFull;

  /// @brief Method Decode, addr 0x430b764, size 0x8, virtual true, abstract: false, final false
  inline int32_t Decode(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len);

  static inline ::System::Xml::IncrementalReadDummyDecoder* New_ctor();

  /// @brief Method .ctor, addr 0x430b76c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsFull, addr 0x430b75c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsFull();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IncrementalReadDummyDecoder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDummyDecoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IncrementalReadDummyDecoder(IncrementalReadDummyDecoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IncrementalReadDummyDecoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IncrementalReadDummyDecoder(IncrementalReadDummyDecoder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7196 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::IncrementalReadDummyDecoder, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IncrementalReadDummyDecoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IncrementalReadDummyDecoder*, "System.Xml", "IncrementalReadDummyDecoder");
