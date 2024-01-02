#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemberHolder)
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class MemberHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::MemberHolder);
// Type: System.Runtime.Serialization::MemberHolder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3235))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3205))
// CS Name: ::System.Runtime.Serialization::MemberHolder*
class CORDL_TYPE MemberHolder : public ::System::Object {
public:
  // Declarations
  /// @brief Field _memberType, offset 0x10, size 0x8
  __declspec(property(get = __get__memberType, put = __set__memberType))::System::Type* _memberType;

  /// @brief Field _context, offset 0x18, size 0x10
  __declspec(property(get = __get__context, put = __set__context))::System::Runtime::Serialization::StreamingContext _context;

  constexpr ::System::Type*& __get__memberType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__memberType() const;

  constexpr void __set__memberType(::System::Type* value);

  constexpr ::System::Runtime::Serialization::StreamingContext& __get__context();

  constexpr ::System::Runtime::Serialization::StreamingContext const& __get__context() const;

  constexpr void __set__context(::System::Runtime::Serialization::StreamingContext value);

  static inline ::System::Runtime::Serialization::MemberHolder* New_ctor(::System::Type* type, ::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method .ctor, addr 0x24b4e80, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Runtime::Serialization::StreamingContext ctx);

  /// @brief Method GetHashCode, addr 0x24b4ebc, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x24b4edc, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "MemberHolder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemberHolder(MemberHolder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemberHolder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemberHolder(MemberHolder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemberHolder();

public:
  /// @brief Field _memberType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____memberType;

  /// @brief Field _context, offset: 0x18, size: 0x10, def value: None
  ::System::Runtime::Serialization::StreamingContext ____context;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::MemberHolder, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::MemberHolder, ____memberType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::MemberHolder, ____context) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::MemberHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::MemberHolder*, "System.Runtime.Serialization", "MemberHolder");
