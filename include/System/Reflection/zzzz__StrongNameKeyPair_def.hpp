#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StrongNameKeyPair)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Reflection {
class StrongNameKeyPair;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::StrongNameKeyPair);
// Type: System.Reflection::StrongNameKeyPair
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3533))
// CS Name: ::System.Reflection::StrongNameKeyPair*
class CORDL_TYPE StrongNameKeyPair : public ::System::Object {
public:
  // Declarations
  /// @brief Field _publicKey, offset 0x10, size 0x8
  __declspec(property(get = __get__publicKey, put = __set__publicKey))::ArrayW<uint8_t, ::Array<uint8_t>*> _publicKey;

  /// @brief Field _keyPairContainer, offset 0x18, size 0x8
  __declspec(property(get = __get__keyPairContainer, put = __set__keyPairContainer))::StringW _keyPairContainer;

  /// @brief Field _keyPairExported, offset 0x20, size 0x1
  __declspec(property(get = __get__keyPairExported, put = __set__keyPairExported)) bool _keyPairExported;

  /// @brief Field _keyPairArray, offset 0x28, size 0x8
  __declspec(property(get = __get__keyPairArray, put = __set__keyPairArray))::ArrayW<uint8_t, ::Array<uint8_t>*> _keyPairArray;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__publicKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__publicKey() const;

  constexpr void __set__publicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get__keyPairContainer();

  constexpr ::StringW const& __get__keyPairContainer() const;

  constexpr void __set__keyPairContainer(::StringW value);

  constexpr bool& __get__keyPairExported();

  constexpr bool const& __get__keyPairExported() const;

  constexpr void __set__keyPairExported(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__keyPairArray();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__keyPairArray() const;

  constexpr void __set__keyPairArray(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::Reflection::StrongNameKeyPair* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x24f958c size 0x1ec virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x24f9778 size 0x148 virtual true final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x24f98c0 size 0x4 virtual true final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  // Ctor Parameters [CppParam { name: "", ty: "StrongNameKeyPair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StrongNameKeyPair(StrongNameKeyPair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StrongNameKeyPair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StrongNameKeyPair(StrongNameKeyPair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StrongNameKeyPair();

public:
  /// @brief Field _publicKey, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____publicKey;

  /// @brief Field _keyPairContainer, offset: 0x18, size: 0x8, def value: None
  ::StringW ____keyPairContainer;

  /// @brief Field _keyPairExported, offset: 0x20, size: 0x1, def value: None
  bool ____keyPairExported;

  /// @brief Field _keyPairArray, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____keyPairArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::StrongNameKeyPair, 0x30>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::StrongNameKeyPair);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::StrongNameKeyPair*, "System.Reflection", "StrongNameKeyPair");
