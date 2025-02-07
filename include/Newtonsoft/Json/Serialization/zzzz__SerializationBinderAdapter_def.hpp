#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/SerializationBinderAdapter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerializationBinderAdapter)
namespace System::Runtime::Serialization {
class SerializationBinder;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class SerializationBinderAdapter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::SerializationBinderAdapter);
// Dependencies Newtonsoft.Json.Serialization.ISerializationBinder, System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.SerializationBinderAdapter
class CORDL_TYPE SerializationBinderAdapter : public ::System::Object {
public:
  // Declarations
  /// @brief Field SerializationBinder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_SerializationBinder, put = __cordl_internal_set_SerializationBinder)) ::System::Runtime::Serialization::SerializationBinder* SerializationBinder;

  /// @brief Convert operator to "::Newtonsoft::Json::Serialization::ISerializationBinder"
  constexpr operator ::Newtonsoft::Json::Serialization::ISerializationBinder*() noexcept;

  /// @brief Method BindToName, addr 0x3f03434, size 0x20, virtual true, abstract: false, final true
  inline void BindToName(::System::Type* serializedType, ::ByRef<::StringW> assemblyName, ::ByRef<::StringW> typeName);

  /// @brief Method BindToType, addr 0x3f03414, size 0x20, virtual true, abstract: false, final true
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  static inline ::Newtonsoft::Json::Serialization::SerializationBinderAdapter* New_ctor(::System::Runtime::Serialization::SerializationBinder* serializationBinder);

  constexpr ::System::Runtime::Serialization::SerializationBinder* const& __cordl_internal_get_SerializationBinder() const;

  constexpr ::System::Runtime::Serialization::SerializationBinder*& __cordl_internal_get_SerializationBinder();

  constexpr void __cordl_internal_set_SerializationBinder(::System::Runtime::Serialization::SerializationBinder* value);

  /// @brief Method .ctor, addr 0x3f033ec, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationBinder* serializationBinder);

  /// @brief Convert to "::Newtonsoft::Json::Serialization::ISerializationBinder"
  constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* i___Newtonsoft__Json__Serialization__ISerializationBinder() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationBinderAdapter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationBinderAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationBinderAdapter(SerializationBinderAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationBinderAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationBinderAdapter(SerializationBinderAdapter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10349 };

  /// @brief Field SerializationBinder, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationBinder* ___SerializationBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::SerializationBinderAdapter, ___SerializationBinder) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::SerializationBinderAdapter, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::SerializationBinderAdapter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::SerializationBinderAdapter*, "Newtonsoft.Json.Serialization", "SerializationBinderAdapter");
