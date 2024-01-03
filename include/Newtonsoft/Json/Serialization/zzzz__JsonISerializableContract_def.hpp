#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
CORDL_MODULE_EXPORT(JsonISerializableContract)
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonISerializableContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonISerializableContract);
// Type: Newtonsoft.Json.Serialization::JsonISerializableContract
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11907))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11913))
// CS Name: ::Newtonsoft.Json.Serialization::JsonISerializableContract*
class CORDL_TYPE JsonISerializableContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
public:
  // Declarations
  /// @brief Field <ISerializableCreator>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __get__ISerializableCreator_k__BackingField,
                      put = __set__ISerializableCreator_k__BackingField))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _ISerializableCreator_k__BackingField;

  __declspec(property(get = get_ISerializableCreator, put = set_ISerializableCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ISerializableCreator;

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __get__ISerializableCreator_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __get__ISerializableCreator_k__BackingField() const;

  constexpr void __set__ISerializableCreator_k__BackingField(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method get_ISerializableCreator, addr 0x266e178, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ISerializableCreator();

  /// @brief Method set_ISerializableCreator, addr 0x266e180, size 0x8, virtual false, abstract: false, final false
  inline void set_ISerializableCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  static inline ::Newtonsoft::Json::Serialization::JsonISerializableContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method .ctor, addr 0x266e188, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* underlyingType);

  // Ctor Parameters [CppParam { name: "", ty: "JsonISerializableContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonISerializableContract(JsonISerializableContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonISerializableContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonISerializableContract(JsonISerializableContract const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonISerializableContract();

public:
  /// @brief Field <ISerializableCreator>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____ISerializableCreator_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonISerializableContract, 0xc8>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonISerializableContract, ____ISerializableCreator_k__BackingField) == 0xc0, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonISerializableContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonISerializableContract*, "Newtonsoft.Json.Serialization", "JsonISerializableContract");
