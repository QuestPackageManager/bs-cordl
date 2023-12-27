#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ElementTryParser_1)
namespace System {
class Object;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Net::Http::Headers {
class Lexer;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template <typename T> class ElementTryParser_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Net::Http::Headers::ElementTryParser_1);
// Type: System.Net.Http.Headers::ElementTryParser`1
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14661))
// CS Name: ::System.Net.Http.Headers::ElementTryParser`1<T>*
class CORDL_TYPE ElementTryParser_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Net::Http::Headers::ElementTryParser_1<T>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Invoke(::System::Net::Http::Headers::Lexer* lexer, ByRef<T> parsedValue, ByRef<::System::Net::Http::Headers::Token> token);

  // Ctor Parameters [CppParam { name: "", ty: "ElementTryParser_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementTryParser_1(ElementTryParser_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementTryParser_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementTryParser_1(ElementTryParser_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementTryParser_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Http::Headers::ElementTryParser_1, "System.Net.Http.Headers", "ElementTryParser`1");
