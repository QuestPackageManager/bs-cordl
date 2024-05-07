#pragma once
// IWYU pragma private; include "ModestTree/Util/ValuePair.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ValuePair)
namespace ModestTree::Util {
template <typename T1, typename T2> class ValuePair_2;
}
namespace ModestTree::Util {
template <typename T1, typename T2, typename T3> class ValuePair_3;
}
namespace ModestTree::Util {
template <typename T1, typename T2, typename T3, typename T4> class ValuePair_4;
}
// Forward declare root types
namespace ModestTree::Util {
class ValuePair;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::Util::ValuePair);
// Type: ModestTree.Util::ValuePair
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree::Util {
// Is value type: false
// CS Name: ::ModestTree.Util::ValuePair*
class CORDL_TYPE ValuePair : public ::System::Object {
public:
  // Declarations
  /// @brief Method New, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2> static inline ::ModestTree::Util::ValuePair_2<T1, T2>* New(T1 first, T2 second);

  /// @brief Method New, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3> static inline ::ModestTree::Util::ValuePair_3<T1, T2, T3>* New(T1 first, T2 second, T3 third);

  /// @brief Method New, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3, typename T4> static inline ::ModestTree::Util::ValuePair_4<T1, T2, T3, T4>* New(T1 first, T2 second, T3 third, T4 fourth);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValuePair(ValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValuePair(ValuePair const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::Util::ValuePair, 0x10>, "Size mismatch!");

} // namespace ModestTree::Util
NEED_NO_BOX(::ModestTree::Util::ValuePair);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::Util::ValuePair*, "ModestTree.Util", "ValuePair");
