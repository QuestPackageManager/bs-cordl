#pragma once
// IWYU pragma private; include "System/Dynamic/Utils/TypeExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeExtensions)
namespace System::Dynamic::Utils {
template <typename TKey, typename TValue> class CacheDict_2;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic::Utils {
class TypeExtensions;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::Utils::TypeExtensions);
// Type: System.Dynamic.Utils::TypeExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: ::System.Dynamic.Utils::TypeExtensions*
class CORDL_TYPE TypeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_paramInfoCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_paramInfoCache, put = setStaticF_s_paramInfoCache))::System::Dynamic::Utils::CacheDict_2<
      ::System::Reflection::MethodBase*, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>* s_paramInfoCache;

  /// @brief Method GetAnyStaticMethodValidated, addr 0x2c8aeec, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* GetAnyStaticMethodValidated(::System::Type* type, ::StringW name, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method GetParametersCached, addr 0x2c8a620, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersCached(::System::Reflection::MethodBase* method);

  /// @brief Method GetReturnType, addr 0x2c8b0d0, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Type* GetReturnType(::System::Reflection::MethodBase* mi);

  /// @brief Method GetTypeCode, addr 0x2c8b174, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TypeCode GetTypeCode(::System::Type* type);

  /// @brief Method MatchesArgumentTypes, addr 0x2c8af90, size 0x140, virtual false, abstract: false, final false
  static inline bool MatchesArgumentTypes(::System::Reflection::MethodInfo* mi, ::ArrayW<::System::Type*, ::Array<::System::Type*>*> argTypes);

  static inline ::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>*
  getStaticF_s_paramInfoCache();

  static inline void setStaticF_s_paramInfoCache(
      ::System::Dynamic::Utils::CacheDict_2<::System::Reflection::MethodBase*, ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeExtensions(TypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeExtensions(TypeExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::Utils::TypeExtensions, 0x10>, "Size mismatch!");

} // namespace System::Dynamic::Utils
NEED_NO_BOX(::System::Dynamic::Utils::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::Utils::TypeExtensions*, "System.Dynamic.Utils", "TypeExtensions");
