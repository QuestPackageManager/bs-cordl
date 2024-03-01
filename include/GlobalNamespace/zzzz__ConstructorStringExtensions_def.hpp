#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConstructorStringExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ConstructorStringExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConstructorStringExtensions);
// Type: ::ConstructorStringExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConstructorStringExtensions*
class CORDL_TYPE ConstructorStringExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToConstructorString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::StringW ToConstructorString(::System::Collections::Generic::List_1<T>* list);

  /// @brief Method ToConstructorString, addr 0xe96b48, size 0x1a4, virtual false, abstract: false, final false
  static inline ::StringW ToConstructorString(::UnityEngine::Pose pose);

  /// @brief Method ToConstructorString, addr 0xe96998, size 0x1b0, virtual false, abstract: false, final false
  static inline ::StringW ToConstructorString(::UnityEngine::Quaternion quaternion);

  /// @brief Method ToConstructorString, addr 0xe968c8, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW ToConstructorString(::UnityEngine::Vector3 vector);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstructorStringExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstructorStringExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstructorStringExtensions(ConstructorStringExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstructorStringExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstructorStringExtensions(ConstructorStringExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConstructorStringExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConstructorStringExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConstructorStringExtensions*, "", "ConstructorStringExtensions");
