#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/ValidationEventHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidationEventHandler)
namespace Newtonsoft::Json::Schema {
class ValidationEventArgs;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class ValidationEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::ValidationEventHandler);
// Type: Newtonsoft.Json.Schema::ValidationEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Schema::ValidationEventHandler*
class CORDL_TYPE ValidationEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3eab3b4, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* sender, ::Newtonsoft::Json::Schema::ValidationEventArgs* e, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3eab3dc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3eab3a0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* sender, ::Newtonsoft::Json::Schema::ValidationEventArgs* e);

  static inline ::Newtonsoft::Json::Schema::ValidationEventHandler* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3e9fb04, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationEventHandler(ValidationEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationEventHandler(ValidationEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10347 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::ValidationEventHandler, 0x80>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::ValidationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::ValidationEventHandler*, "Newtonsoft.Json.Schema", "ValidationEventHandler");
