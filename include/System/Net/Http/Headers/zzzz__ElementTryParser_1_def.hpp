#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/ElementTryParser_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ElementTryParser_1)
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template <typename T> class ElementTryParser_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Net::Http::Headers::ElementTryParser_1);
// Dependencies System.MulticastDelegate
namespace System::Net::Http::Headers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Net.Http.Headers.ElementTryParser`1<T>
class CORDL_TYPE ElementTryParser_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(::System::Net::Http::Headers::Lexer* lexer, ::ByRef<T> parsedValue, ::ByRef<::System::Net::Http::Headers::Token> token);

  static inline ::System::Net::Http::Headers::ElementTryParser_1<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ElementTryParser_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ElementTryParser_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ElementTryParser_1(ElementTryParser_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ElementTryParser_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ElementTryParser_1(ElementTryParser_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::Http::Headers::ElementTryParser_1, "System.Net.Http.Headers", "ElementTryParser`1");
