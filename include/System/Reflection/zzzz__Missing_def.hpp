#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Missing)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Reflection {
class Missing;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Missing);
// Type: System.Reflection::Missing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3476))
// CS Name: ::System.Reflection::Missing*
class CORDL_TYPE Missing : public ::System::Object {
public:
  // Declarations
  /// @brief Field Value, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Value, put = setStaticF_Value))::System::Reflection::Missing* Value;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  static inline void setStaticF_Value(::System::Reflection::Missing* value);

  static inline ::System::Reflection::Missing* getStaticF_Value();

  static inline ::System::Reflection::Missing* New_ctor();

  /// @brief Method .ctor, addr 0x2507c0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2507c14, size 0x40, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "Missing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Missing(Missing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Missing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Missing(Missing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Missing();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Missing, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::Missing);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Missing*, "System.Reflection", "Missing");
