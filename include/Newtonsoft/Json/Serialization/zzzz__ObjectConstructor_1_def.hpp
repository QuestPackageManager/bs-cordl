#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ObjectConstructor_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(ObjectConstructor_1)
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
template <typename T> class ObjectConstructor_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::Serialization::ObjectConstructor_1);
// Dependencies System.MulticastDelegate
namespace Newtonsoft::Json::Serialization {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.ObjectConstructor`1<T>
class CORDL_TYPE ObjectConstructor_1 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<T>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectConstructor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectConstructor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectConstructor_1(ObjectConstructor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectConstructor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectConstructor_1(ObjectConstructor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Serialization::ObjectConstructor_1, "Newtonsoft.Json.Serialization", "ObjectConstructor`1");
