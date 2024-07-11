#pragma once
// IWYU pragma private; include "System/UIntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIntPtr)
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
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct UIntPtr;
}
// Write type traits
MARK_VAL_T(::System::UIntPtr);
// Type: System::UIntPtr
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::UIntPtr
struct CORDL_TYPE UIntPtr {
public:
  // Declarations
  /// @brief Field Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero))::System::UIntPtr Zero;

  /// @brief Convert operator to "::System::IEquatable_1<::System::UIntPtr>"
  constexpr operator ::System::IEquatable_1<::System::UIntPtr>*();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method Equals, addr 0x29bfbac, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x29bfc24, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method System.IEquatable<System.UIntPtr>.Equals, addr 0x29bfd88, size 0x10, virtual true, abstract: false, final true
  inline bool System_IEquatable_System_UIntPtr__Equals(::System::UIntPtr other);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x29bfc9c, size 0xa4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString, addr 0x29bfc2c, size 0x70, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x29bfba4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> value);

  /// @brief Method .ctor, addr 0x29bfb98, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t value);

  /// @brief Method .ctor, addr 0x29bfb30, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  static inline ::System::UIntPtr getStaticF_Zero();

  /// @brief Method get_Size, addr 0x29bfb90, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_Size();

  /// @brief Convert to "::System::IEquatable_1<::System::UIntPtr>"
  constexpr ::System::IEquatable_1<::System::UIntPtr>* i___System__IEquatable_1___System__UIntPtr_();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method op_Equality, addr 0x29bfd40, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::UIntPtr value1, ::System::UIntPtr value2);

  /// @brief Method op_Explicit, addr 0x29bfd80, size 0x8, virtual false, abstract: false, final false
  static inline ::System::UIntPtr op_Explicit___System__UIntPtr(uint32_t value);

  /// @brief Method op_Explicit, addr 0x29bfd60, size 0x20, virtual false, abstract: false, final false
  static inline ::System::UIntPtr op_Explicit___System__UIntPtr(uint64_t value);

  /// @brief Method op_Explicit, addr 0x29bfd5c, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t op_Explicit_uint32_t(::System::UIntPtr value);

  /// @brief Method op_Explicit, addr 0x29bfd58, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::System::UIntPtr value);

  /// @brief Method op_Inequality, addr 0x29bfd4c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::UIntPtr value1, ::System::UIntPtr value2);

  static inline void setStaticF_Zero(::System::UIntPtr value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIntPtr();

  // Ctor Parameters [CppParam { name: "_pointer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }]
  constexpr UIntPtr(::cordl_internals::Ptr<void> _pointer) noexcept;

  /// @brief Field _pointer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> _pointer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UIntPtr, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::UIntPtr, _pointer) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::UIntPtr, "System", "UIntPtr");
