#pragma once
// IWYU pragma private; include "System\Net\HttpRequestCreator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HttpRequestCreator)
namespace System::Net {
class IWebRequestCreate;
}
namespace System::Net {
class WebRequest;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class HttpRequestCreator;
}
// Write type traits
MARK_REF_T(::System::Net::HttpRequestCreator*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpRequestCreator*, "System.Net", "HttpRequestCreator");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpRequestCreator
class CORDL_TYPE HttpRequestCreator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Net::IWebRequestCreate"
  constexpr operator ::System::Net::IWebRequestCreate*() noexcept;

  /// @brief Method Create, addr 0x633053c, size 0x5c, virtual true, abstract: false, final true
  inline ::System::Net::WebRequest* Create(::System::Uri* uri);

  static inline ::System::Net::HttpRequestCreator* New_ctor();

  /// @brief Method .ctor, addr 0x6330538, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Net::IWebRequestCreate"
  constexpr ::System::Net::IWebRequestCreate* i___System__Net__IWebRequestCreate() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpRequestCreator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestCreator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpRequestCreator(HttpRequestCreator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpRequestCreator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpRequestCreator(HttpRequestCreator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11601 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpRequestCreator) == 0x10, "Size mismatch!");

} // namespace System::Net
