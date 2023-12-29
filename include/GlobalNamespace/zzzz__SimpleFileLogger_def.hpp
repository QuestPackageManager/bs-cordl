#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SimpleFileLogger)
namespace GlobalNamespace {
class __SimpleFileLogger__MonoLogger;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleFileLogger;
}
namespace GlobalNamespace {
class __SimpleFileLogger__MonoLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleFileLogger);
MARK_REF_PTR_T(::GlobalNamespace::__SimpleFileLogger__MonoLogger);
// Type: ::MonoLogger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13896))
// CS Name: ::SimpleFileLogger::MonoLogger*
class CORDL_TYPE __SimpleFileLogger__MonoLogger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lines, offset 0x18, size 0x8
  __declspec(property(get = __get__lines, put = __set__lines))::System::Collections::Generic::List_1<::StringW>* _lines;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__lines();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__lines() const;

  constexpr void __set__lines(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method OnDestroy addr 0x1f99d10 size 0x4c virtual false final false
  inline void OnDestroy();

  /// @brief Method Log addr 0x1f999d4 size 0xa8 virtual false final false
  inline void Log(::StringW text);

  /// @brief Method Clear addr 0x1f99930 size 0x84 virtual false final false
  inline void Clear();

  static inline ::GlobalNamespace::__SimpleFileLogger__MonoLogger* New_ctor();

  /// @brief Method .ctor addr 0x1f99d5c size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SimpleFileLogger__MonoLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SimpleFileLogger__MonoLogger(__SimpleFileLogger__MonoLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SimpleFileLogger__MonoLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SimpleFileLogger__MonoLogger(__SimpleFileLogger__MonoLogger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SimpleFileLogger__MonoLogger();

public:
  /// @brief Field _lines, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____lines;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SimpleFileLogger__MonoLogger, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SimpleFileLogger__MonoLogger, ____lines) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SimpleFileLogger
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13897))
// CS Name: ::SimpleFileLogger*
class CORDL_TYPE SimpleFileLogger : public ::System::Object {
public:
  // Declarations
  using MonoLogger = ::GlobalNamespace::__SimpleFileLogger__MonoLogger;

  /// @brief Field _monoLogger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__monoLogger, put = setStaticF__monoLogger))::GlobalNamespace::__SimpleFileLogger__MonoLogger* _monoLogger;

  static inline void setStaticF__monoLogger(::GlobalNamespace::__SimpleFileLogger__MonoLogger* value);

  static inline ::GlobalNamespace::__SimpleFileLogger__MonoLogger* getStaticF__monoLogger();

  /// @brief Method get_monoLogger addr 0x1f9981c size 0x114 virtual false final false
  static inline ::GlobalNamespace::__SimpleFileLogger__MonoLogger* get_monoLogger();

  /// @brief Method Log addr 0x1f999b4 size 0x20 virtual false final false
  static inline void Log(::StringW text);

  /// @brief Method LogVector addr 0x1f99a7c size 0x274 virtual false final false
  static inline void LogVector(::StringW description, ::UnityEngine::Vector3 vec);

  /// @brief Method Clear addr 0x1f99cf0 size 0x18 virtual false final false
  static inline void Clear();

  static inline ::GlobalNamespace::SimpleFileLogger* New_ctor();

  /// @brief Method .ctor addr 0x1f99d08 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SimpleFileLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleFileLogger(SimpleFileLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleFileLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleFileLogger(SimpleFileLogger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleFileLogger();

public:
  /// @brief Field kFilename offset 0xffffffff size 0x8
  static constexpr ::ConstString kFilename{ u"SimpleLog.txt" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleFileLogger, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleFileLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleFileLogger*, "", "SimpleFileLogger");
NEED_NO_BOX(::GlobalNamespace::__SimpleFileLogger__MonoLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SimpleFileLogger__MonoLogger*, "", "SimpleFileLogger/MonoLogger");
