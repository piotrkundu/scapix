// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_UTIL_LOGGING_LOGGER_H
#define SCAPIX_JAVA_UTIL_LOGGING_LOGGER_H

namespace scapix::java_api {

namespace java::lang { class String; }
namespace java::lang { class Throwable; }
namespace java::util { class ResourceBundle; }
namespace java::util::function { class Supplier; }
namespace java::util::logging { class Filter; }
namespace java::util::logging { class Handler; }
namespace java::util::logging { class Level; }
namespace java::util::logging { class LogRecord; }

namespace java::util::logging {

class Logger : public object_base<SCAPIX_META_STRING("java/util/logging/Logger"),
	java::lang::Object>
{
public:

	static ref<java::lang::String> GLOBAL_LOGGER_NAME_();
	static ref<java::util::logging::Logger> global();

	static ref<java::util::logging::Logger> getGlobal();
	static ref<java::util::logging::Logger> getLogger(ref<java::lang::String> name);
	static ref<java::util::logging::Logger> getLogger(ref<java::lang::String> name, ref<java::lang::String> resourceBundleName);
	static ref<java::util::logging::Logger> getAnonymousLogger();
	static ref<java::util::logging::Logger> getAnonymousLogger(ref<java::lang::String> resourceBundleName);
	ref<java::util::ResourceBundle> getResourceBundle();
	ref<java::lang::String> getResourceBundleName();
	void setFilter(ref<java::util::logging::Filter> newFilter);
	ref<java::util::logging::Filter> getFilter();
	void log(ref<java::util::logging::LogRecord> record);
	void log(ref<java::util::logging::Level> level, ref<java::lang::String> msg);
	void log(ref<java::util::logging::Level> level, ref<java::util::function::Supplier> msgSupplier);
	void log(ref<java::util::logging::Level> level, ref<java::lang::String> msg, ref<java::lang::Object> param1);
	void log(ref<java::util::logging::Level> level, ref<java::lang::String> msg, ref<link::java::array<java::lang::Object>> params);
	void log(ref<java::util::logging::Level> level, ref<java::lang::String> msg, ref<java::lang::Throwable> thrown);
	void log(ref<java::util::logging::Level> level, ref<java::lang::Throwable> thrown, ref<java::util::function::Supplier> msgSupplier);
	void logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> msg);
	void logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::util::function::Supplier> msgSupplier);
	void logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> msg, ref<java::lang::Object> param1);
	void logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> msg, ref<link::java::array<java::lang::Object>> params);
	void logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> msg, ref<java::lang::Throwable> thrown);
	void logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::Throwable> thrown, ref<java::util::function::Supplier> msgSupplier);
	void logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> bundleName, ref<java::lang::String> msg);
	void logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> bundleName, ref<java::lang::String> msg, ref<java::lang::Object> param1);
	void logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> bundleName, ref<java::lang::String> msg, ref<link::java::array<java::lang::Object>> params);
	void logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::util::ResourceBundle> bundle, ref<java::lang::String> msg, ref<link::java::array<java::lang::Object>> params);
	void logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> bundleName, ref<java::lang::String> msg, ref<java::lang::Throwable> thrown);
	void logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::util::ResourceBundle> bundle, ref<java::lang::String> msg, ref<java::lang::Throwable> thrown);
	void entering(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod);
	void entering(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::Object> param1);
	void entering(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<link::java::array<java::lang::Object>> params);
	void exiting(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod);
	void exiting(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::Object> result);
	void throwing(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::Throwable> thrown);
	void severe(ref<java::lang::String> msg);
	void warning(ref<java::lang::String> msg);
	void info(ref<java::lang::String> msg);
	void config(ref<java::lang::String> msg);
	void fine(ref<java::lang::String> msg);
	void finer(ref<java::lang::String> msg);
	void finest(ref<java::lang::String> msg);
	void severe(ref<java::util::function::Supplier> msgSupplier);
	void warning(ref<java::util::function::Supplier> msgSupplier);
	void info(ref<java::util::function::Supplier> msgSupplier);
	void config(ref<java::util::function::Supplier> msgSupplier);
	void fine(ref<java::util::function::Supplier> msgSupplier);
	void finer(ref<java::util::function::Supplier> msgSupplier);
	void finest(ref<java::util::function::Supplier> msgSupplier);
	void setLevel(ref<java::util::logging::Level> newLevel);
	ref<java::util::logging::Level> getLevel();
	jboolean isLoggable(ref<java::util::logging::Level> level);
	ref<java::lang::String> getName();
	void addHandler(ref<java::util::logging::Handler> handler);
	void removeHandler(ref<java::util::logging::Handler> handler);
	ref<link::java::array<java::util::logging::Handler>> getHandlers();
	void setUseParentHandlers(jboolean useParentHandlers);
	jboolean getUseParentHandlers();
	void setResourceBundle(ref<java::util::ResourceBundle> bundle);
	ref<java::util::logging::Logger> getParent();
	void setParent(ref<java::util::logging::Logger> parent);

protected:

	Logger(handle_type h) : base_(h) {}

};

} // namespace java::util::logging
} // namespace scapix::java_api

#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/ResourceBundle.h>
#include <scapix/java_api/java/util/function/Supplier.h>
#include <scapix/java_api/java/util/logging/Filter.h>
#include <scapix/java_api/java/util/logging/Handler.h>
#include <scapix/java_api/java/util/logging/Level.h>
#include <scapix/java_api/java/util/logging/LogRecord.h>

namespace scapix::java_api {
namespace java::util::logging {

inline ref<java::lang::String> Logger::GLOBAL_LOGGER_NAME_() { return get_static_field<SCAPIX_META_STRING("GLOBAL_LOGGER_NAME"), ref<java::lang::String>>(); }
inline ref<java::util::logging::Logger> Logger::global() { return get_static_field<SCAPIX_META_STRING("global"), ref<java::util::logging::Logger>>(); }
inline ref<java::util::logging::Logger> Logger::getGlobal() { return call_static_method<SCAPIX_META_STRING("getGlobal"), ref<java::util::logging::Logger>>(); }
inline ref<java::util::logging::Logger> Logger::getLogger(ref<java::lang::String> name) { return call_static_method<SCAPIX_META_STRING("getLogger"), ref<java::util::logging::Logger>>(name); }
inline ref<java::util::logging::Logger> Logger::getLogger(ref<java::lang::String> name, ref<java::lang::String> resourceBundleName) { return call_static_method<SCAPIX_META_STRING("getLogger"), ref<java::util::logging::Logger>>(name, resourceBundleName); }
inline ref<java::util::logging::Logger> Logger::getAnonymousLogger() { return call_static_method<SCAPIX_META_STRING("getAnonymousLogger"), ref<java::util::logging::Logger>>(); }
inline ref<java::util::logging::Logger> Logger::getAnonymousLogger(ref<java::lang::String> resourceBundleName) { return call_static_method<SCAPIX_META_STRING("getAnonymousLogger"), ref<java::util::logging::Logger>>(resourceBundleName); }
inline ref<java::util::ResourceBundle> Logger::getResourceBundle() { return call_method<SCAPIX_META_STRING("getResourceBundle"), ref<java::util::ResourceBundle>>(); }
inline ref<java::lang::String> Logger::getResourceBundleName() { return call_method<SCAPIX_META_STRING("getResourceBundleName"), ref<java::lang::String>>(); }
inline void Logger::setFilter(ref<java::util::logging::Filter> newFilter) { return call_method<SCAPIX_META_STRING("setFilter"), void>(newFilter); }
inline ref<java::util::logging::Filter> Logger::getFilter() { return call_method<SCAPIX_META_STRING("getFilter"), ref<java::util::logging::Filter>>(); }
inline void Logger::log(ref<java::util::logging::LogRecord> record) { return call_method<SCAPIX_META_STRING("log"), void>(record); }
inline void Logger::log(ref<java::util::logging::Level> level, ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("log"), void>(level, msg); }
inline void Logger::log(ref<java::util::logging::Level> level, ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("log"), void>(level, msgSupplier); }
inline void Logger::log(ref<java::util::logging::Level> level, ref<java::lang::String> msg, ref<java::lang::Object> param1) { return call_method<SCAPIX_META_STRING("log"), void>(level, msg, param1); }
inline void Logger::log(ref<java::util::logging::Level> level, ref<java::lang::String> msg, ref<link::java::array<java::lang::Object>> params) { return call_method<SCAPIX_META_STRING("log"), void>(level, msg, params); }
inline void Logger::log(ref<java::util::logging::Level> level, ref<java::lang::String> msg, ref<java::lang::Throwable> thrown) { return call_method<SCAPIX_META_STRING("log"), void>(level, msg, thrown); }
inline void Logger::log(ref<java::util::logging::Level> level, ref<java::lang::Throwable> thrown, ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("log"), void>(level, thrown, msgSupplier); }
inline void Logger::logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("logp"), void>(level, sourceClass, sourceMethod, msg); }
inline void Logger::logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("logp"), void>(level, sourceClass, sourceMethod, msgSupplier); }
inline void Logger::logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> msg, ref<java::lang::Object> param1) { return call_method<SCAPIX_META_STRING("logp"), void>(level, sourceClass, sourceMethod, msg, param1); }
inline void Logger::logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> msg, ref<link::java::array<java::lang::Object>> params) { return call_method<SCAPIX_META_STRING("logp"), void>(level, sourceClass, sourceMethod, msg, params); }
inline void Logger::logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> msg, ref<java::lang::Throwable> thrown) { return call_method<SCAPIX_META_STRING("logp"), void>(level, sourceClass, sourceMethod, msg, thrown); }
inline void Logger::logp(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::Throwable> thrown, ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("logp"), void>(level, sourceClass, sourceMethod, thrown, msgSupplier); }
inline void Logger::logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> bundleName, ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("logrb"), void>(level, sourceClass, sourceMethod, bundleName, msg); }
inline void Logger::logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> bundleName, ref<java::lang::String> msg, ref<java::lang::Object> param1) { return call_method<SCAPIX_META_STRING("logrb"), void>(level, sourceClass, sourceMethod, bundleName, msg, param1); }
inline void Logger::logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> bundleName, ref<java::lang::String> msg, ref<link::java::array<java::lang::Object>> params) { return call_method<SCAPIX_META_STRING("logrb"), void>(level, sourceClass, sourceMethod, bundleName, msg, params); }
inline void Logger::logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::util::ResourceBundle> bundle, ref<java::lang::String> msg, ref<link::java::array<java::lang::Object>> params) { return call_method<SCAPIX_META_STRING("logrb"), void>(level, sourceClass, sourceMethod, bundle, msg, params); }
inline void Logger::logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::String> bundleName, ref<java::lang::String> msg, ref<java::lang::Throwable> thrown) { return call_method<SCAPIX_META_STRING("logrb"), void>(level, sourceClass, sourceMethod, bundleName, msg, thrown); }
inline void Logger::logrb(ref<java::util::logging::Level> level, ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::util::ResourceBundle> bundle, ref<java::lang::String> msg, ref<java::lang::Throwable> thrown) { return call_method<SCAPIX_META_STRING("logrb"), void>(level, sourceClass, sourceMethod, bundle, msg, thrown); }
inline void Logger::entering(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod) { return call_method<SCAPIX_META_STRING("entering"), void>(sourceClass, sourceMethod); }
inline void Logger::entering(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::Object> param1) { return call_method<SCAPIX_META_STRING("entering"), void>(sourceClass, sourceMethod, param1); }
inline void Logger::entering(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<link::java::array<java::lang::Object>> params) { return call_method<SCAPIX_META_STRING("entering"), void>(sourceClass, sourceMethod, params); }
inline void Logger::exiting(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod) { return call_method<SCAPIX_META_STRING("exiting"), void>(sourceClass, sourceMethod); }
inline void Logger::exiting(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::Object> result) { return call_method<SCAPIX_META_STRING("exiting"), void>(sourceClass, sourceMethod, result); }
inline void Logger::throwing(ref<java::lang::String> sourceClass, ref<java::lang::String> sourceMethod, ref<java::lang::Throwable> thrown) { return call_method<SCAPIX_META_STRING("throwing"), void>(sourceClass, sourceMethod, thrown); }
inline void Logger::severe(ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("severe"), void>(msg); }
inline void Logger::warning(ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("warning"), void>(msg); }
inline void Logger::info(ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("info"), void>(msg); }
inline void Logger::config(ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("config"), void>(msg); }
inline void Logger::fine(ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("fine"), void>(msg); }
inline void Logger::finer(ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("finer"), void>(msg); }
inline void Logger::finest(ref<java::lang::String> msg) { return call_method<SCAPIX_META_STRING("finest"), void>(msg); }
inline void Logger::severe(ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("severe"), void>(msgSupplier); }
inline void Logger::warning(ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("warning"), void>(msgSupplier); }
inline void Logger::info(ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("info"), void>(msgSupplier); }
inline void Logger::config(ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("config"), void>(msgSupplier); }
inline void Logger::fine(ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("fine"), void>(msgSupplier); }
inline void Logger::finer(ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("finer"), void>(msgSupplier); }
inline void Logger::finest(ref<java::util::function::Supplier> msgSupplier) { return call_method<SCAPIX_META_STRING("finest"), void>(msgSupplier); }
inline void Logger::setLevel(ref<java::util::logging::Level> newLevel) { return call_method<SCAPIX_META_STRING("setLevel"), void>(newLevel); }
inline ref<java::util::logging::Level> Logger::getLevel() { return call_method<SCAPIX_META_STRING("getLevel"), ref<java::util::logging::Level>>(); }
inline jboolean Logger::isLoggable(ref<java::util::logging::Level> level) { return call_method<SCAPIX_META_STRING("isLoggable"), jboolean>(level); }
inline ref<java::lang::String> Logger::getName() { return call_method<SCAPIX_META_STRING("getName"), ref<java::lang::String>>(); }
inline void Logger::addHandler(ref<java::util::logging::Handler> handler) { return call_method<SCAPIX_META_STRING("addHandler"), void>(handler); }
inline void Logger::removeHandler(ref<java::util::logging::Handler> handler) { return call_method<SCAPIX_META_STRING("removeHandler"), void>(handler); }
inline ref<link::java::array<java::util::logging::Handler>> Logger::getHandlers() { return call_method<SCAPIX_META_STRING("getHandlers"), ref<link::java::array<java::util::logging::Handler>>>(); }
inline void Logger::setUseParentHandlers(jboolean useParentHandlers) { return call_method<SCAPIX_META_STRING("setUseParentHandlers"), void>(useParentHandlers); }
inline jboolean Logger::getUseParentHandlers() { return call_method<SCAPIX_META_STRING("getUseParentHandlers"), jboolean>(); }
inline void Logger::setResourceBundle(ref<java::util::ResourceBundle> bundle) { return call_method<SCAPIX_META_STRING("setResourceBundle"), void>(bundle); }
inline ref<java::util::logging::Logger> Logger::getParent() { return call_method<SCAPIX_META_STRING("getParent"), ref<java::util::logging::Logger>>(); }
inline void Logger::setParent(ref<java::util::logging::Logger> parent) { return call_method<SCAPIX_META_STRING("setParent"), void>(parent); }

} // namespace java::util::logging
} // namespace scapix::java_api

#endif // SCAPIX_JAVA_UTIL_LOGGING_LOGGER_H
