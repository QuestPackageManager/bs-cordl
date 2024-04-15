#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationCallback)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
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
class SerializationCallback;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::SerializationCallback);
// Type: Newtonsoft.Json.Serialization::SerializationCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::SerializationCallback*
class CORDL_TYPE SerializationCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x292e0c4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x292e158, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x292e0b0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::Newtonsoft::Json::Serialization::SerializationCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2924390, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationCallback(SerializationCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationCallback(SerializationCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::SerializationCallback, 0x80>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::SerializationCallback);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::SerializationCallback*, "Newtonsoft.Json.Serialization", "SerializationCallback");
