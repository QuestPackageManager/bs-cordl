#pragma once
// IWYU pragma private; include "System/IntPtr.hpp"
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
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.IntPtr
struct CORDL_TYPE IntPtr {
public:
  // Declarations
  /// @brief Field Zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::IntPtr Zero;

  /// @brief Convert operator to "::System::IEquatable_1<::System::IntPtr>"
  constexpr operator ::System::IEquatable_1<::System::IntPtr>*();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method Add, addr 0x5a7c440, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr Add(::System::IntPtr pointer, int32_t offset);

  /// @brief Method Equals, addr 0x5a7c384, size 0x34, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5a78450, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsNull, addr 0x5a7c458, size 0x10, virtual false, abstract: false, final false
  inline bool IsNull();

  /// @brief Method System.IEquatable<System.IntPtr>.Equals, addr 0x5a7c468, size 0x10, virtual true, abstract: false, final true
  inline bool System_IEquatable_System_IntPtr__Equals(::System::IntPtr other);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x5a7c2d0, size 0xac, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToInt32, addr 0x5a7c3b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t ToInt32();

  /// @brief Method ToInt64, addr 0x5a7c37c, size 0x8, virtual false, abstract: false, final false
  inline int64_t ToInt64();

  /// @brief Method ToPointer, addr 0x5a7c3c0, size 0x8, virtual false, abstract: false, final false
  inline void* ToPointer();

  /// @brief Method ToString, addr 0x5a7c3c8, size 0x24, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x5a7c3ec, size 0x20, virtual false, abstract: false, final false
  inline ::StringW ToString(::StringW format);

  /// @brief Method .ctor, addr 0x5a7c264, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x5a7c248, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

  /// @brief Method .ctor, addr 0x5a7c254, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int64_t value);

  /// @brief Method .ctor, addr 0x5a7c25c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* value);

  static inline ::System::IntPtr getStaticF_Zero();

  /// @brief Method get_Size, addr 0x5a782cc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_Size();

  /// @brief Convert to "::System::IEquatable_1<::System::IntPtr>"
  constexpr ::System::IEquatable_1<::System::IntPtr>* i___System__IEquatable_1___System__IntPtr_();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method op_Addition, addr 0x5a7c448, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Addition(::System::IntPtr pointer, int32_t offset);

  /// @brief Method op_Equality, addr 0x5a7c40c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::IntPtr value1, ::System::IntPtr value2);

  /// @brief Method op_Explicit, addr 0x5a7c424, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(int32_t value);

  /// @brief Method op_Explicit, addr 0x5a7c42c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(int64_t value);

  /// @brief Method op_Explicit, addr 0x5a7c430, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(void* value);

  /// @brief Method op_Explicit, addr 0x5a7c434, size 0x4, virtual false, abstract: false, final false
  static inline int32_t op_Explicit_int32_t(::System::IntPtr value);

  /// @brief Method op_Explicit, addr 0x5a7c438, size 0x4, virtual false, abstract: false, final false
  static inline int64_t op_Explicit_int64_t(::System::IntPtr value);

  /// @brief Method op_Explicit, addr 0x5a7c43c, size 0x4, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::System::IntPtr value);

  /// @brief Method op_Inequality, addr 0x5a7c418, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::IntPtr value1, ::System::IntPtr value2);

  /// @brief Method op_Subtraction, addr 0x5a7c450, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Subtraction(::System::IntPtr pointer, int32_t offset);

  static inline void setStaticF_Zero(::System::IntPtr value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntPtr();

  // Ctor Parameters [CppParam { name: "m_value", ty: "void*", modifiers: "", def_value: None }]
  constexpr IntPtr(void* m_value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2613 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_value, offset: 0x0, size: 0x8, def value: None
  void* m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::IntPtr, m_value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IntPtr, 0x8>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::IntPtr, "System", "IntPtr");
