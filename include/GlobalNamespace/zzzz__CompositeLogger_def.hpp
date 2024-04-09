#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CompositeLogger)
namespace GlobalNamespace {
class IBeatSaberLogger;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CompositeLogger;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CompositeLogger);
// Type: ::CompositeLogger
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CompositeLogger*
class CORDL_TYPE CompositeLogger : public ::System::Object {
public:
  // Declarations
  /// @brief Field _loggers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__loggers, put = __cordl_internal_set__loggers))::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* _loggers;

  /// @brief Convert operator to "::GlobalNamespace::IBeatSaberLogger"
  constexpr operator ::GlobalNamespace::IBeatSaberLogger*() noexcept;

  /// @brief Method AddLogger, addr 0x258067c, size 0xa8, virtual false, abstract: false, final false
  inline void AddLogger(::GlobalNamespace::IBeatSaberLogger* logger);

  /// @brief Method Log, addr 0x2580724, size 0x1b0, virtual true, abstract: false, final true
  inline void Log(::StringW message);

  /// @brief Method Log, addr 0x25808d4, size 0x1c4, virtual true, abstract: false, final true
  inline void Log(::StringW message, ::System::Object* context);

  /// @brief Method LogError, addr 0x2580e10, size 0x1b4, virtual true, abstract: false, final true
  inline void LogError(::StringW message);

  /// @brief Method LogError, addr 0x2580fc4, size 0x1c4, virtual true, abstract: false, final true
  inline void LogError(::StringW message, ::System::Object* context);

  /// @brief Method LogException, addr 0x2581188, size 0x1b4, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception);

  /// @brief Method LogException, addr 0x258133c, size 0x1c4, virtual true, abstract: false, final true
  inline void LogException(::System::Exception* exception, ::System::Object* context);

  /// @brief Method LogWarning, addr 0x2580a98, size 0x1b4, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message);

  /// @brief Method LogWarning, addr 0x2580c4c, size 0x1c4, virtual true, abstract: false, final true
  inline void LogWarning(::StringW message, ::System::Object* context);

  static inline ::GlobalNamespace::CompositeLogger* New_ctor(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* loggers);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*& __cordl_internal_get__loggers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>*> const& __cordl_internal_get__loggers() const;

  constexpr void __cordl_internal_set__loggers(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* value);

  /// @brief Method .ctor, addr 0x2580654, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* loggers);

  /// @brief Convert to "::GlobalNamespace::IBeatSaberLogger"
  constexpr ::GlobalNamespace::IBeatSaberLogger* i___GlobalNamespace__IBeatSaberLogger() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompositeLogger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompositeLogger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompositeLogger(CompositeLogger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompositeLogger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompositeLogger(CompositeLogger const&) = delete;

  /// @brief Field _loggers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IBeatSaberLogger*>* ____loggers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CompositeLogger, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CompositeLogger, ____loggers) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CompositeLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CompositeLogger*, "", "CompositeLogger");
