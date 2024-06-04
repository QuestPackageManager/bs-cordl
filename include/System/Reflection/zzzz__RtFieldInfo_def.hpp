#pragma once
// IWYU pragma private; include "System/Reflection/RtFieldInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
CORDL_MODULE_EXPORT(RtFieldInfo)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Reflection {
class RtFieldInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RtFieldInfo);
// Type: System.Reflection::RtFieldInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::RtFieldInfo*
class CORDL_TYPE RtFieldInfo : public ::System::Reflection::FieldInfo {
public:
  // Declarations
  /// @brief Method CheckConsistency, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CheckConsistency(::System::Object* target);

  static inline ::System::Reflection::RtFieldInfo* New_ctor();

  /// @brief Method UnsafeGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* UnsafeGetValue(::System::Object* obj);

  /// @brief Method UnsafeSetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnsafeSetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                             ::System::Globalization::CultureInfo* culture);

  /// @brief Method .ctor, addr 0x288d568, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RtFieldInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RtFieldInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RtFieldInfo(RtFieldInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RtFieldInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RtFieldInfo(RtFieldInfo const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RtFieldInfo, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RtFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RtFieldInfo*, "System.Reflection", "RtFieldInfo");
