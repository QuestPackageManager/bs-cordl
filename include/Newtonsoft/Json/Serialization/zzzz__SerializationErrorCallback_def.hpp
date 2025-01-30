#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/SerializationErrorCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(SerializationErrorCallback)
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
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
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class SerializationErrorCallback;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::SerializationErrorCallback);
// Dependencies System.MulticastDelegate
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.SerializationErrorCallback
class CORDL_TYPE SerializationErrorCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3ee782c, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3ee78c4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3ee7818, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Object* o, ::System::Runtime::Serialization::StreamingContext context, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext);

  static inline ::Newtonsoft::Json::Serialization::SerializationErrorCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3ee7714, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationErrorCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationErrorCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationErrorCallback(SerializationErrorCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationErrorCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationErrorCallback(SerializationErrorCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10313 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::SerializationErrorCallback, 0x80>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::SerializationErrorCallback);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::SerializationErrorCallback*, "Newtonsoft.Json.Serialization", "SerializationErrorCallback");
