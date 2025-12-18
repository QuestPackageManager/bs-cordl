#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/TypeHandleRefEqualityComparer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeHandleRefEqualityComparer)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Runtime::Serialization {
class TypeHandleRef;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class TypeHandleRefEqualityComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::TypeHandleRefEqualityComparer);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.TypeHandleRefEqualityComparer
class CORDL_TYPE TypeHandleRefEqualityComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>*() noexcept;

  /// @brief Method Equals, addr 0x5f9697c, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::System::Runtime::Serialization::TypeHandleRef* x, ::System::Runtime::Serialization::TypeHandleRef* y);

  /// @brief Method GetHashCode, addr 0x5f969a4, size 0x14, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Runtime::Serialization::TypeHandleRef* obj);

  static inline ::System::Runtime::Serialization::TypeHandleRefEqualityComparer* New_ctor();

  /// @brief Method .ctor, addr 0x5f9320c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Runtime::Serialization::TypeHandleRef*>*
  i___System__Collections__Generic__IEqualityComparer_1___System__Runtime__Serialization__TypeHandleRef__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeHandleRefEqualityComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeHandleRefEqualityComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeHandleRefEqualityComparer(TypeHandleRefEqualityComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeHandleRefEqualityComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeHandleRefEqualityComparer(TypeHandleRefEqualityComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16987 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::TypeHandleRefEqualityComparer, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::TypeHandleRefEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::TypeHandleRefEqualityComparer*, "System.Runtime.Serialization", "TypeHandleRefEqualityComparer");
