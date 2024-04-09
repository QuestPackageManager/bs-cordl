#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TrueReadOnlyCollection_1)
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename T> class TrueReadOnlyCollection_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Runtime::CompilerServices::TrueReadOnlyCollection_1);
// Type: System.Runtime.CompilerServices::TrueReadOnlyCollection`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::TrueReadOnlyCollection`1<T>*
class CORDL_TYPE TrueReadOnlyCollection_1 : public ::System::Collections::ObjectModel::ReadOnlyCollection_1<T> {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::TrueReadOnlyCollection_1<T>* New_ctor(::ArrayW<T, ::Array<T>*> list);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> list);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrueReadOnlyCollection_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrueReadOnlyCollection_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrueReadOnlyCollection_1(TrueReadOnlyCollection_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrueReadOnlyCollection_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrueReadOnlyCollection_1(TrueReadOnlyCollection_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::TrueReadOnlyCollection_1, "System.Runtime.CompilerServices", "TrueReadOnlyCollection`1");
