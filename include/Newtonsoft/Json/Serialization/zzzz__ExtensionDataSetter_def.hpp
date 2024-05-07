#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ExtensionDataSetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtensionDataSetter)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ExtensionDataSetter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ExtensionDataSetter);
// Type: Newtonsoft.Json.Serialization::ExtensionDataSetter
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::ExtensionDataSetter*
class CORDL_TYPE ExtensionDataSetter : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2a2cc10, size 0x2c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* o, ::StringW key, ::System::Object* value, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2a2cc3c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2a2cbfc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* o, ::StringW key, ::System::Object* value);

  static inline ::Newtonsoft::Json::Serialization::ExtensionDataSetter* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2a22fd0, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionDataSetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtensionDataSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtensionDataSetter(ExtensionDataSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionDataSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtensionDataSetter(ExtensionDataSetter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ExtensionDataSetter, 0x80>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ExtensionDataSetter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ExtensionDataSetter*, "Newtonsoft.Json.Serialization", "ExtensionDataSetter");
