#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualityComparer_1)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class EqualityComparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::EqualityComparer_1);
// Type: System.Collections.Generic::EqualityComparer`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Collections.Generic::EqualityComparer`1<T>*
class CORDL_TYPE EqualityComparer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultComparer, put = setStaticF_defaultComparer))::System::Collections::Generic::EqualityComparer_1<T>* defaultComparer;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<T>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Method CreateComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::EqualityComparer_1<T>* CreateComparer();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool Equals(T x, T y);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetHashCode(T obj);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t IndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  /// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t LastIndexOf(::ArrayW<T, ::Array<T>*> array, T value, int32_t startIndex, int32_t count);

  static inline ::System::Collections::Generic::EqualityComparer_1<T>* New_ctor();

  /// @brief Method System.Collections.IEqualityComparer.Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IEqualityComparer_Equals(::System::Object* x, ::System::Object* y);

  /// @brief Method System.Collections.IEqualityComparer.GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::EqualityComparer_1<T>* getStaticF_defaultComparer();

  /// @brief Method get_Default, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::EqualityComparer_1<T>* get_Default();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<T>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<T>* i___System__Collections__Generic__IEqualityComparer_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::IEqualityComparer"
  constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

  static inline void setStaticF_defaultComparer(::System::Collections::Generic::EqualityComparer_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EqualityComparer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EqualityComparer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EqualityComparer_1(EqualityComparer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EqualityComparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EqualityComparer_1(EqualityComparer_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::EqualityComparer_1, "System.Collections.Generic", "EqualityComparer`1");
