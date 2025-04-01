#pragma once
// IWYU pragma private; include "System/Net/HttpContinueDelegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContinueDelegate)
namespace System::Net {
class WebHeaderCollection;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class HttpContinueDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::HttpContinueDelegate);
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpContinueDelegate
class CORDL_TYPE HttpContinueDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x449cad4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t StatusCode, ::System::Net::WebHeaderCollection* httpHeaders);

  static inline ::System::Net::HttpContinueDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x449ca48, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpContinueDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpContinueDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpContinueDelegate(HttpContinueDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpContinueDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpContinueDelegate(HttpContinueDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9599 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::HttpContinueDelegate, 0x80>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::HttpContinueDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpContinueDelegate*, "System.Net", "HttpContinueDelegate");
