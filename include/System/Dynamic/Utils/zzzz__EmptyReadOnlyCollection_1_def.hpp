#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyReadOnlyCollection_1)
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
// Forward declare root types
namespace System::Dynamic::Utils {
template <typename T> class EmptyReadOnlyCollection_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Dynamic::Utils::EmptyReadOnlyCollection_1);
// Type: System.Dynamic.Utils::EmptyReadOnlyCollection`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic::Utils {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Dynamic.Utils::EmptyReadOnlyCollection`1<T>*
class CORDL_TYPE EmptyReadOnlyCollection_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* Instance;

  static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* getStaticF_Instance();

  static inline void setStaticF_Instance(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyReadOnlyCollection_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EmptyReadOnlyCollection_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyReadOnlyCollection_1(EmptyReadOnlyCollection_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyReadOnlyCollection_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyReadOnlyCollection_1(EmptyReadOnlyCollection_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Dynamic::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Dynamic::Utils::EmptyReadOnlyCollection_1, "System.Dynamic.Utils", "EmptyReadOnlyCollection`1");
