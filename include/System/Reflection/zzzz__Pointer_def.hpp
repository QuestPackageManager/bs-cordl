#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Pointer)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class Pointer;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Pointer);
// Type: System.Reflection::Pointer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::Pointer*
class CORDL_TYPE Pointer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ptr, put = __cordl_internal_set__ptr))::cordl_internals::Ptr<void> _ptr;

  /// @brief Field _ptrType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ptrType, put = __cordl_internal_set__ptrType))::System::Type* _ptrType;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Box, addr 0x2769d98, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Object* Box(::cordl_internals::Ptr<void> ptr, ::System::Type* type);

  static inline ::System::Reflection::Pointer* New_ctor(::cordl_internals::Ptr<void> ptr, ::System::Type* ptrType);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x2769f20, size 0x40, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  constexpr ::cordl_internals::Ptr<void> const& __cordl_internal_get__ptr() const;

  constexpr ::cordl_internals::Ptr<void>& __cordl_internal_get__ptr();

  constexpr ::System::Type*& __cordl_internal_get__ptrType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__ptrType() const;

  constexpr void __cordl_internal_set__ptr(::cordl_internals::Ptr<void> value);

  constexpr void __cordl_internal_set__ptrType(::System::Type* value);

  /// @brief Method .ctor, addr 0x2769d6c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> ptr, ::System::Type* ptrType);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pointer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pointer(Pointer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pointer(Pointer const&) = delete;

  /// @brief Field _ptr, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> ____ptr;

  /// @brief Field _ptrType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____ptrType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Pointer, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::Pointer, ____ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::Pointer, ____ptrType) == 0x18, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::Pointer);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Pointer*, "System.Reflection", "Pointer");
