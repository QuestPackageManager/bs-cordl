#pragma once
// IWYU pragma private; include "System/UIntPtr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
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
DEFINE_IL2CPP_CLASS(::System::UIntPtr, "System", "UIntPtr");
// [CLSCompliant(false)]
// [ComVisible(true)]
// [IsReadOnly]
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.UIntPtr
struct CORDL_TYPE UIntPtr {
public:
  // Declarations
  /// @brief Field Zero, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Zero, put = setStaticF_Zero)) ::System::UIntPtr Zero;

  /// @brief Convert operator to "::System::IEquatable_1<::System::UIntPtr>"
  constexpr operator ::System::IEquatable_1<::System::UIntPtr>*();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method Equals, addr 0x60ba3f4, size 0x34, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x60ba428, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method System.IEquatable<System.UIntPtr>.Equals, addr 0x60ba530, size 0x10, virtual true, abstract: false, final true
  inline bool System_IEquatable_System_UIntPtr__Equals(::System::UIntPtr other);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x60ba454, size 0xac, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// [CLSCompliant(false)]
  /// @brief Method ToPointer, addr 0x60ba430, size 0x8, virtual false, abstract: false, final false
  inline void* ToPointer();

  /// @brief Method ToString, addr 0x60ba438, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x60ba3e0, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint32_t value);

  /// @brief Method .ctor, addr 0x60ba3d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t value);

  /// [CLSCompliant(false)]
  /// @brief Method .ctor, addr 0x60ba3ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* value);

  static inline ::System::UIntPtr getStaticF_Zero();

  /// @brief Method get_Size, addr 0x60ba3d8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_Size();

  /// @brief Convert to "::System::IEquatable_1<::System::UIntPtr>"
  constexpr ::System::IEquatable_1<::System::UIntPtr>* i___System__IEquatable_1___System__UIntPtr_();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  /// @brief Method op_Equality, addr 0x60ba500, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::UIntPtr value1, ::System::UIntPtr value2);

  /// @brief Method op_Explicit, addr 0x60ba528, size 0x8, virtual false, abstract: false, final false
  static inline ::System::UIntPtr op_Explicit___System__UIntPtr(uint32_t value);

  /// @brief Method op_Explicit, addr 0x60ba520, size 0x4, virtual false, abstract: false, final false
  static inline ::System::UIntPtr op_Explicit___System__UIntPtr(uint64_t value);

  /// @brief Method op_Explicit, addr 0x60ba51c, size 0x4, virtual false, abstract: false, final false
  static inline uint32_t op_Explicit_uint32_t(::System::UIntPtr value);

  /// @brief Method op_Explicit, addr 0x60ba518, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t op_Explicit_uint64_t(::System::UIntPtr value);

  /// [CLSCompliant(false)]
  /// @brief Method op_Explicit, addr 0x60ba524, size 0x4, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::System::UIntPtr value);

  /// @brief Method op_Inequality, addr 0x60ba50c, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::UIntPtr value1, ::System::UIntPtr value2);

  static inline void setStaticF_Zero(::System::UIntPtr value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIntPtr();

  // Ctor Parameters [CppParam { name: "_pointer", ty: "void*", modifiers: "", def_value: None, comment: None }]
  constexpr UIntPtr(void* _pointer) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _pointer, offset: 0x0, size: 0x8, def value: None
  void* _pointer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::UIntPtr, _pointer) == 0x0, "Offset mismatch!");

static_assert(sizeof(::System::UIntPtr) == 0x8, "Size mismatch!");

} // namespace System
