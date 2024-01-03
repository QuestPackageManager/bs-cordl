#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Comparer_1)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections {
class IComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class Comparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::Comparer_1);
// Type: System.Collections.Generic::Comparer`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3865))
// CS Name: ::System.Collections.Generic::Comparer`1<T>*
class CORDL_TYPE Comparer_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultComparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultComparer, put = setStaticF_defaultComparer))::System::Collections::Generic::Comparer_1<T>* defaultComparer;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<T>"
  constexpr operator ::System::Collections::Generic::IComparer_1<T>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<T>"
  constexpr ::System::Collections::Generic::IComparer_1<T>* i___System__Collections__Generic__IComparer_1_T_() noexcept;

  static inline void setStaticF_defaultComparer(::System::Collections::Generic::Comparer_1<T>* value);

  static inline ::System::Collections::Generic::Comparer_1<T>* getStaticF_defaultComparer();

  /// @brief Method get_Default, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Comparer_1<T>* get_Default();

  /// @brief Method CreateComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Comparer_1<T>* CreateComparer();

  /// @brief Method Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t Compare(T x, T y);

  /// @brief Method System.Collections.IComparer.Compare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IComparer_Compare(::System::Object* x, ::System::Object* y);

  static inline ::System::Collections::Generic::Comparer_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Comparer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Comparer_1(Comparer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Comparer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Comparer_1(Comparer_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Comparer_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::Comparer_1, "System.Collections.Generic", "Comparer`1");
