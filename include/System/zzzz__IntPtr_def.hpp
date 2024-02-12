#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntPtr)
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
struct IntPtr;
}
// Write type traits
MARK_VAL_T(::System::IntPtr);
// Type: System::IntPtr
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2603))
// CS Name: ::System::IntPtr
struct CORDL_TYPE IntPtr {
public:
  // Declarations
  /// @brief Field Zero, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) void* Zero;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Convert operator to "::System::IEquatable_1<void*>"
  constexpr operator ::System::IEquatable_1<void*>*();

  /// @brief Convert to "::System::IEquatable_1<void*>"
  constexpr ::System::IEquatable_1<void*>* i___System__IEquatable_1_void__();

  static inline void setStaticF_Zero(void* value);

  static inline void* getStaticF_Zero();

  /// @brief Method .ctor, addr 0x261dfb4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x261dfc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x261dfc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> value);

  /// @brief Method .ctor, addr 0x261dfd0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Size, addr 0x261e030, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_Size();

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x261e038, size 0xa4, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Equals, addr 0x261e0e4, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x261a200, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToInt32, addr 0x261e15c, size 0x8, virtual false, abstract: false, final false
  inline int32_t ToInt32();

  /// @brief Method ToInt64, addr 0x261e0dc, size 0x8, virtual false, abstract: false, final false
  inline int64_t ToInt64();

  /// @brief Method ToPointer, addr 0x261e164, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> ToPointer();

  /// @brief Method ToString, addr 0x261e16c, size 0x28, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x261e194, size 0x24, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method op_Equality, addr 0x2616054, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(void* value1, void* value2);

  /// @brief Method op_Inequality, addr 0x261d5a8, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(void* value1, void* value2);

  /// @brief Method op_Explicit, addr 0x261e1b8, size 0x8, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(int32_t value);

  /// @brief Method op_Explicit, addr 0x261e1c0, size 0x4, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(int64_t value);

  /// @brief Method op_Explicit, addr 0x261e1c4, size 0x4, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::cordl_internals::Ptr<void> value);

  /// @brief Method op_Explicit, addr 0x261e1c8, size 0x4, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(void* value);

  /// @brief Method op_Explicit, addr 0x261e1cc, size 0x4, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(void* value);

  /// @brief Method op_Explicit, addr 0x261e1d0, size 0x4, virtual false, abstract: false, final false
  static inline ::cordl_internals::Ptr<void> op_Explicit___cordl_internals__Ptr_void_(void* value);

  /// @brief Method Add, addr 0x261e1d4, size 0x8, virtual false, abstract: false, final false
  static inline void* Add(void* pointer, int32_t offset);

  /// @brief Method op_Addition, addr 0x261e1dc, size 0x8, virtual false, abstract: false, final false
  static inline void* op_Addition(void* pointer, int32_t offset);

  /// @brief Method op_Subtraction, addr 0x261e1e4, size 0x8, virtual false, abstract: false, final false
  static inline void* op_Subtraction(void* pointer, int32_t offset);

  /// @brief Method IsNull, addr 0x261e1ec, size 0x10, virtual false, abstract: false, final false
  inline bool IsNull();

  /// @brief Method System.IEquatable<System.IntPtr>.Equals, addr 0x261e1fc, size 0x10, virtual true, abstract: false, final true
  inline bool System_IEquatable_System_IntPtr__Equals(void* other);

  // Ctor Parameters [CppParam { name: "m_value", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }]
  constexpr IntPtr(::cordl_internals::Ptr<void> m_value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntPtr();

  /// @brief Field m_value, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> m_value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IntPtr, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::IntPtr, m_value) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::IntPtr, "System", "IntPtr");
